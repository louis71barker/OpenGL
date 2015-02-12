#include <iostream>
#include <ngl/Random.h>
#include <ngl/NGLStream.h>
#include <ngl/ShaderLib.h>
#include <ngl/VAOPrimitives.h>
#include "Particle.h"
#include "Emitter.h"

Particle::Particle(const ngl::Vec3 &_initialPos, Emitter *_emitter)
 : m_emitter(_emitter), m_initialPos(_initialPos), m_pos(m_initialPos), m_life(0)
{
  ngl::Random* rng = ngl::Random::instance();

  m_maxLife = rng->randomPositiveNumber(20);
  m_dir = rng->getRandomNormalizedVec3();
}

void Particle::update()
{
  if(++m_life < m_maxLife)
  {
    m_pos += m_dir;
  }
  else
  {
    ngl::Random* rng = ngl::Random::instance();

    m_dir = rng->getRandomNormalizedVec3();
    m_maxLife = rng->randomPositiveNumber(20);
    m_life = 0;
    m_pos = m_emitter->getPos();
  }
}

void Particle::loadMatricesToShader()
{
  ngl::ShaderLib *shader=ngl::ShaderLib::instance();

  ngl::Mat4 MV;
  ngl::Mat4 MVP;
  ngl::Mat3 normalMatrix;
  ngl::Mat4 M;

  ngl::Mat4 scale;
  scale.scale(0.2, 1.0, 0.2);

  //M=m_mouseGlobalTX;

  M.translate(m_pos.m_x, m_pos.m_y, m_pos.m_z);
  M *= scale;

  MV=  M*m_emitter->getCam()->getViewMatrix();
  MVP= M*m_emitter->getCam()->getVPMatrix(); // model transform matrix * view project matrix

  normalMatrix=MV;
  normalMatrix.inverse();
  shader->setShaderParamFromMat4("MV",MV);
  shader->setShaderParamFromMat4("MVP",MVP);
  shader->setShaderParamFromMat3("normalMatrix",normalMatrix);
  shader->setShaderParamFromMat4("M",M);
}

void Particle::draw()
{
  loadMatricesToShader();
  ngl::VAOPrimitives::instance()->draw("cube");
}

Particle::~Particle()
{

}
