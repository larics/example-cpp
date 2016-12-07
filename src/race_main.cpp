/*
   This file contains the main entry point for the (very) simple trafic 
   simulation demo. Its purpose is to illustrate the basic concepts
   of the LARICS C++ coding standard.
 */

#include <iostream>

#include "SimulationEngine.h"

using vehicles::SimulationEngine;

int main(int argc, char** argv)
{
    // Create a simulated race of 2km.
    SimulationEngine sim(2);
    sim.run();
    
    return 0;
}
