/*
 * Scott Downey
 * scott.m.downey@gmail.com
 * C/C++ Programming III : Intermediate Programming with Objects, 114426, Raymond Mitchell III
 * May 29, 2016
 * PeriodicSignal.cpp
 * Windows 10
 * Visual Studio Community 2015
 *
 * This source code defines the class 'AngularSensor'
 *
 */

#include "PeriodicSignal.h"
#include "Time.h"
using Project2::Time;

//constructor for abstract class 'PeriodicSignal'
Project2::PeriodicSignal::PeriodicSignal(double voltageOffset, Time timeOffset, double minVoltage, 
    double maxVoltage, Time period) : 
    Signal(voltageOffset, timeOffset), minValue(minVoltage), maxValue(maxVoltage), period(period) {}

//function to access minimum voltage value
double Project2::PeriodicSignal::getMinVoltage() const
{
    return minValue;
}

//function to access maximum voltage value
double Project2::PeriodicSignal::getMaxVoltage() const
{
    return maxValue;
}

//function to access period data member
Time Project2::PeriodicSignal::getPeriod() const
{
    return period;
}
