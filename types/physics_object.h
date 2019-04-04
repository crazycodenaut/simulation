#ifndef __physics_object_h
#define __physics_object_h

class PhysicsObject
{
 public:
   virtual void Step(double dt) = 0;
   
};

#endif // __physics_object_h