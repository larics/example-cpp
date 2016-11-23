/*
   This file contains the main entry point for the (very) simple trafic 
   simulation demo. Its purpose is to illustrate the basic concepts
   of the LARICS C++ coding standard.
 */

#include <iostream>

#include "Car.h"

using Vehicles::Car;

int main(int argc, char** argv)
{
    Car car("Nissan", 200.0);
    
    return 0;
}
