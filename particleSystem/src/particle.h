#ifndef PARTICLE_H__
#define PARTICLE_H__

#define MAXPARTICLE 1000

class particle
{
public:
  int partNumber [MAXPARTICLE];
  float partX;
  float partY;
  void update();
  void particleDraw();
private:

};


#endif


#ifndef PARTICLE_H
#define PARTICLE_H

#include <ngl/Vec3.h>
#include <ngl/Colour.h>

class Emitter;

class Particle
{
  public:
    /// @brief ctor
    /// @param _initialPos The position of the emitter
    Particle(const ngl::Vec3 &_initialPos, Emitter* _emitter);

    /// @brief Update the particle
    void update();

    /// @brief Draw particle
    void draw() ;

    ~Particle();

  private:
    void loadMatricesToShader();
    Emitter *m_emitter;

    ngl::Vec3 m_initialPos;
    ngl::Vec3 m_pos;
    ngl::Vec3 m_dir;
    ngl::Vec3 m_velocity;
    ngl::Colour m_colour;

    int m_life;
    int m_maxLife;

    float m_size;
};

#endif
