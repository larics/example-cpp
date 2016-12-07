/// \file  Bike.h
/// \brief Contains the definition of the Bike class.
///

#ifndef H_VEHICLES_BIKE
#define H_VEHICLES_BIKE

#include <string>

#include "Vehicle.h"

namespace vehicles
{
    
/// A Bike class.
/// Implements a **very** simplified Bike model.
///
class Bike : public Vehicle
{
 public:
    
    /// The bike constructor.
    /// Constructs a brand new bike.
    ///
    /// \param model The model of the bike.
    /// \param max_speed The maximum speed of the bike.
    ///
    Bike(std::string model, double max_speed);

    /// The bike destructor.
    ///
    /// Stops the bike and releases any possibly allocated resources.
    ///
    ~Bike();

    // Virtual methods will inherit the documentation
    // from the parent class.
    virtual double accelerate(double speed);

    virtual double decelerate(double speed);

    virtual double speed(void)
    {
        return current_speed_;
    }

    virtual double updateDistance(double td);
    
    virtual std::string model(void)
    {
        return model_;
    }
    
    virtual void stuck_in_traffic(bool stuck)
    {
        // This is a no-op, because bikes never get stuck in traffic :)
    }
    
    virtual bool stuck_in_traffic(void)
    {
        // Bikes never get stuck in traffic ;)
        return false;
    }
    
 private:

    // Don't use Doxygen commens for private members,
    // because we don't want to autogenerate docs for these.
    

    // According to the coding standard, all private members
    // should have a _ suffix.

    // The bike model.
    std::string model_;

    // Maximum speed of the bike.
    const double max_speed_;

    // Current bike speed.
    double current_speed_;

    // Total distance travelled.
    double total_distance_;
};
 
} // namespace vehicles

#endif // H_VEHICLES_BIKE
