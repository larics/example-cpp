/* Internal (maintainer) doc only.

 */

#include <iostream>
#include <chrono>
#include <thread>

#include "Bike.h"
#include "Car.h"
#include "SimulationEngine.h"

using std::cout;
using std::endl;
using std::unique_ptr;

namespace vehicles
{

SimulationEngine::SimulationEngine(double course_length, double td)
    : course_length_(course_length),
      td_(td)
{
    // Add the vehicles
    vehicles_.push_back(unique_ptr<Vehicle>(new Car("Ferrari",250)));
    vehicles_.push_back(unique_ptr<Vehicle>(new Bike("Kona",60)));
}

SimulationEngine::~SimulationEngine()
{
    // We're using smart pointers, so we don't need to
    // explicitly release any resources.
}


void SimulationEngine::run()
{

    // Local variables for keeping track of the race.
    std::string leader = "";
    double max_distance = 0.0;
    std::chrono::milliseconds sleep_time(static_cast<long>(td_*1000));
    
    // Introduce the competitors and start the engines
    cout << "Today's competitors are:" << endl;
    int id = 1;
    for (auto& veh : vehicles_)
    {
        cout << id << ". " << veh->model() << endl;
        id++;
        // We're setting a huge speed reference, so all vehicles
        // will put the pedal to the metal.
        veh->accelerate(1000);
    }

    cout << "Starting the race of " << course_length_ << " kilometers." << endl;
    
    // Main simulation loop.
    while (max_distance < course_length_)
    {
        for (auto& veh : vehicles_)
        {
            double distance = veh->updateDistance(td_);
            cout << veh->model() << " is at " << distance << "km" << endl;
            if (distance > max_distance)
            {
                max_distance = distance;
                leader = veh->model();
            }  
        }
        // Sleep to make the simulation run in real-time
        std::this_thread::sleep_for(sleep_time);
    }
    cout << "And the WINNER is: " << leader << "!!!" << endl;
}

} // namespace Vehicles
