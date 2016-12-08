/*! \file  SimulationEngine.h
   \brief Simulation engine class declaration.

   
*/

#ifndef VEHICLES_SIMULATION_ENGINE_H
#define VEHICLES_SIMULATION_ENGINE_H

#include <list>
#include <memory>

#include "vehicle.h"

namespace vehicles
{

/*! The simulation engine class.

    This is the main class that runs the race simulation.

*/
class SimulationEngine
{
 public:
    //! Simulation engine constructor
    //
    //  \param course_length The length of the race course, in km.
    //  \param td Simulation sample time, in seconds.
    //
    //  The simulation runs in real-time, so don't exaggerate
    //  with course_length!
    //
    SimulationEngine(double course_length, double td = 1);

    /*!

     */
    ~SimulationEngine();

    //! Run the simulation.
    //    At each time step, computes the traffic conditions
    //    and then calls updateDistance on all vehicles.
    //    Once the first vehicle reaches the end of the course, 
    //    the simulation stops.
    void run();
    
 private:
    
    // Length of the racing course.
    double course_length_;

    // Sample time.
    double td_;

    // List of simulated vehicles.
    std::list<std::unique_ptr<Vehicle>> vehicles_;
    
};
    
} // namespace Vehicles

#endif // VEHICLES_SIMULATION_ENGINE_H
