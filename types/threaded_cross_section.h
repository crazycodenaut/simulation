#ifndef __threaded_cross_section_h
#define __threaded_cross_section_h

#include "step_list.h"

class ThreadedCrossSection<int X, int Y, int W, int H>
{ 
 private:
   StepList<PhysicsObject*> _cross_section_objects;
   
 public:
   
};

#endif // __threaded_cross_section_h
