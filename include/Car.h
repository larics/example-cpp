/* \file  Car.h
   \brief Contains the definition of the Car class.

 */

#include <string>

#include "Vehicle"

/*! A Car class.

    Implements a **very** simplified Car model.
 */
class Car : public Vehicle
{

    /*! The car constructor.
        Constructs a brand new car.

        \param make The make of the car.
        \param max_speed The maximum speed of the car.

     */
    Car(std::string make, double max_speed);

    /*! The car destructor.

        Stops the car and releases any possibly allocated resources.
     */
    ~Car();

    virtual double accelerate(double speed);

    virtual double decelerate(double speed);
};
