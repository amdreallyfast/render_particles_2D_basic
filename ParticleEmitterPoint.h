#pragma once

#include "IParticleEmitter.h"
#include "Particle.h"
#include "MinMaxVelocity.h"
#include "glm/vec2.hpp"

/*-----------------------------------------------------------------------------------------------
Description:
    This particle emitter will reset particles to a position at a single point and will set their
    velocity to a random vector anywhere within 360 degrees.
Creator:    John Cox (7-2-2016)
-----------------------------------------------------------------------------------------------*/
class ParticleEmitterPoint : public IParticleEmitter
{
public:
    // emits randomly from the origin point
    ParticleEmitterPoint(const glm::vec2 &emitterPos, const float minVel, const float maxVel);
    virtual void ResetParticle(Particle *resetThis) const;
private:
    glm::vec2 _position;
    float _radius;
    MinMaxVelocity _velocityCalculator;
};