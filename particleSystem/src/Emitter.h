#ifndef EMITTER_H
#define EMITTER_H

#include <ngl/Vec3.h>
#include <vector>
#include <ngl/Camera.h>

// Pre-declare (no need to know about particle internals)
class Particle;

class Emitter
{
  public:
    /// @brief This will push back a Particle for each _numParticles
    Emitter(int _numParticles, const ngl::Vec3 &_pos);

    /// @brief Dtor does nothing
    ~Emitter();

    /// @brief Call update() method on each particle
    void update();

    /// @brief Call draw() method for each particle
    void draw() ;

    /// @brief Get position of emitter
    const ngl::Vec3 &getPos() const { return m_pos; }

    void setPos(const ngl::Vec3 &_p) { m_pos = _p; }
    void moveEmitter(const ngl::Vec3 &_p) { m_pos += _p; }

    void setCam(ngl::Camera * const _cam) { m_cam = _cam; }
    ngl::Camera* getCam() const { return m_cam; }

  private:
    std::vector<Particle> m_particles;
    ngl::Vec3 m_pos;

    ngl::Camera* m_cam;
};

#endif
