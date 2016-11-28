/* \file  Vehicle.h
   \brief Contains the definition of the Vehicle base class

   Note that no line exceeds 80 characters in length.
 */

#ifndef H_VEHICLES_VEHICLE
#define H_VEHICLES_VEHICLE

#include <string>

namespace Vehicles
{

/*! The Vehicle base class.
    This is an Abstract Base Class (ABC). It just defines the vehicle interface.
    It does not contain any data and can not be instantiated.
 */
class Vehicle
{
 public:
    
    /*! The Vehicle constructor.
        Does nothing.
     */
    Vehicle()
    {

    }

    /*! The Vehicle destructor.
        It is pure virtual and prevents the direct instantiation of Vehicle objects.
     */
    virtual ~Vehicle() = 0;

    /*! Accelerate the vehicle.
        Accelerates the vehicle until the desired speed is reached.

        \param speed The desired speed.
        \return The actual speed acheived

        The desired value is truncated to the maximum vehicle speed.
     */
    virtual double accelerate(double speed) = 0;

    /*! Decelerate the vehicle.
        Decelerates the vehicle to the desired speed.

        \param speed The desired speed.
        \return Returns the acheived vehicle speed. 

        If the desired speed is greater than the current speed, it is discarded.
        If it is less than zero, it is also discarded.
     */
    virtual double decelerate(double speed) = 0;

    /*! Returns the model of the vehicle */
    virtual std::string model(void) = 0;
};

inline Vehicle::~Vehicle()
{

}

} // namespace Vehicles

#endif // H_VEHICLES_VEHICLE

