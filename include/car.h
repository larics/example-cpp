/// \file  Car.h
///   \brief Contains the definition of the Car class.
///

#ifndef H_VEHICLES_CAR
#define H_VEHICLES_CAR

#include <string>

#include "vehicle.h"

namespace vehicles
{
    
/// A Car class.
///
/// Implements a **very** simplified Car model.
///
class Car : public Vehicle
{
 public:
    
    /// The car constructor.
    /// Constructs a brand new car.
    ///
    /// \param model The model of the car.
    /// \param max_speed The maximum speed of the car, in km/h.
    ///
    Car(std::string model, double max_speed);

    /// The car destructor.
    ///
    /// Stops the car and releases any possibly allocated resources.
    ///
    ~Car();

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

    virtual void stuck_in_traffic(bool stuck);
    
    virtual bool stuck_in_traffic(void)
    {
        return stuck_;
    }
    
 private:

    // Don't use Doxygen comments for private members,
    // because we don't want to autogenerate docs for these.
    

    // According to the coding standard, all private members
    // should have a _ suffix.

    // The car make.
    std::string model_;

    // Maximum speed of the car.
    const double max_speed_;

    // Current car speed.
    double current_speed_;

    // Total distance travelled.
    double total_distance_;
    
    // Variable indicating if the vehicle is stuck in traffic or not
    bool stuck_;
};
 
} // namespace vehicles

#endif // H_VEHICLES_CAR
