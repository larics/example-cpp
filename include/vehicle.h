/// \file  Vehicle.h
///   \brief Contains the definition of the Vehicle base class
///
///   Note that no line exceeds 80 characters in length.
///

#ifndef H_VEHICLES_VEHICLE
#define H_VEHICLES_VEHICLE

#include <string>

namespace vehicles
{

/// The Vehicle base class.
/// This is an Abstract Base Class (ABC). It just defines the vehicle interface.
/// It does not contain any data and can has pure virtual functions,
/// so it can not be instantiated.
///
class Vehicle
{
 public:
    
    /// The Vehicle constructor.
    /// Does nothing.
    ///
    Vehicle()
    {

    }

    /// The Vehicle destructor.
    ///
    /// The default keyword is used for ABC destructors.
    ///
    virtual ~Vehicle() = default;

    /// Accelerate the vehicle.
    /// Accelerates the vehicle until the desired speed is reached.
    ///
    /// \param speed The desired speed, in km/h.
    /// \return The actual speed acheived, in km/h.
    ///
    /// The desired value is truncated to the maximum vehicle speed.
    ///
    virtual double accelerate(double speed) = 0;

    /// Decelerate the vehicle.
    /// Decelerates the vehicle to the desired speed.
    ///
    /// \param speed The desired speed, in km/h.
    /// \return Returns the acheived vehicle speed, in km/h. 
    ///
    /// If the desired speed is greater than the current speed, it is discarded.
    /// If it is less than zero, it is also discarded.
    ///
    virtual double decelerate(double speed) = 0;
    
    /// Returns the current vehicle speed in km/h
    ///
    ///
    virtual double speed(void) = 0;

    /// Update the travelled distance.
    ///
    /// \param td Sample time (i.e. time since last update), in seconds.
    ///
    virtual double updateDistance(double td) = 0;

    /// Returns the model of the vehicle
    virtual std::string model(void) = 0;

    /// Makes the vehicle stuck in traffic
    virtual void stuck_in_traffic(bool stuck) = 0;

    /// Returns true if the vehicle is stuck in traffic
    virtual bool stuck_in_traffic(void) = 0;
};

} // namespace Vehicles

#endif // H_VEHICLES_VEHICLE

