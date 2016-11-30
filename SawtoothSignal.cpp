/*
 * Scott Downey
 * scott.m.downey@gmail.com
 * C/C++ Programming III : Intermediate Programming with Objects, 114426, Raymond Mitchell III
 * May 29, 2016
 * SawtoothSignal.cpp
 * Windows 10
 * Visual Studio Community 2015
 *
 * This source code defines the class 'SawtoothSignal'
 *
 */

#include <cmath>
using std::fmod;

#include "SawtoothSignal.h"

//constructor for class 'SawtoothSignal'
Project2::SawtoothSignal::SawtoothSignal(double voltageOffset, Time timeOffset, double minVoltage,
    double maxVoltage, Time period) :
    PeriodicSignal(voltageOffset, timeOffset, minVoltage, maxVoltage, period) {}

//function to calculate and return the voltage at a specified time (passed as argument)
double Project2::SawtoothSignal::getVoltageAtTime(Time t) const
{
    return getVoltageOffset() + getMinVoltage() +
        fmod(((t.getTotalTimeAsSeconds() + getTimeOffset().getTotalTimeAsSeconds()) * 
            (getMaxVoltage() - getMinVoltage()) / getPeriod().getTotalTimeAsSeconds()), 
            (getMaxVoltage() - getMinVoltage()));
}
