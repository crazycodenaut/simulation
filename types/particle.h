#ifndef __particle_h
#define __particle_h

#include "physics_vectors.h"
#include "physics_object.h"


/*
 * A Particle is a PhysicsObject (an object that has a step function), mass, velocity, position and no physical extent (literally just a point in space)
 */
class Particle: PhysicsObject
{
 private:
   PositionVector _position;
   VelocityVector _velocity;
   double _mass;
   
 public: 
   
};

#endif // __particle_h
