#include <iostream>
#include <ngl/Random.h>
#include <Emitter.h>
#include <Particle.h>

Emitter::Emitter(int _numParticles, const ngl::Vec3 &_pos)
{
  ngl::Random* rng = ngl::Random::instance();
  rng->setSeed();

  for(int i=0; i<_numParticles; ++i)
  {
    m_particles.push_back(Particle(_pos, this));
  }

  std::cout << "#X      #Y      #Z\n";
}

Emitter::~Emitter()
{
  // Nothing
}

void Emitter::update()
{
  const std::vector<Particle>::iterator itEnd = m_particles.end();

  for(std::vector<Particle>::iterator it = m_particles.begin();
      it != itEnd;
      ++it)
  {
    it->update();
  }

//  for(uint i=0; i<m_particles.size(); ++i)
//  {
//    m_particles[i].update();
//  }
}

void Emitter::draw()
{
  const std::vector<Particle>::iterator itEnd = m_particles.end();

  for(std::vector<Particle>::iterator it = m_particles.begin();
      it != itEnd;
      ++it)
  {
    it->draw();
  }

//  for(uint i=0; i<m_particles.size(); ++i)
//  {
//    m_particles[i].draw();
//  }
}
