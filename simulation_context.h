#ifndef __simulation_context_h
#define __simulation_context_h

#include "configuration.h"

#include "types/lattice.h"
#include "types/threaded_cross_section.h"
#include "types/step_list.h"
#include "types/particle.h"

class SimulationContext
{
 private:
   Lattice<LATTICE_DIMENSION, LATTICE_DIMENSION> _whole_lattice;
   Particle _all_particles[NUM_OF_PARTICLES];
   
 public:
     
   
};

#endif // __simulation_context_h
