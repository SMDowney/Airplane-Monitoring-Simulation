/*
 * Scott Downey
 * scott.m.downey@gmail.com
 * C/C++ Programming III : Intermediate Programming with Objects, 114426, Raymond Mitchell III
 * May 29, 2016
 * SineSignal.cpp
 * Windows 10
 * Visual Studio Community 2015
 *
 * This source code defines the class 'SineSignal'
 *
 */

#include <cmath>
using std::sin;

#include "SineSignal.h"

//values used to help calculate the sine 'VoltageAtTime' formula
const double PI = 3.14159265358979323846;
const double SIN_FORM = 2.;

//constructor for class 'SineSignal'
Project2::SineSignal::SineSignal(double voltageOffset, Time timeOffset, double minVoltage,
    double maxVoltage, Time period) :
    PeriodicSignal(voltageOffset, timeOffset, minVoltage, maxVoltage, period) {}

//function to calculate and return the voltage at a specified time (passed as argument)
double Project2::SineSignal::getVoltageAtTime(Time t) const
{
    return getVoltageOffset() + getMinVoltage() + (getMaxVoltage() - getMinVoltage()) / SIN_FORM +
        sin((t.getTotalTimeAsSeconds() + getTimeOffset().getTotalTimeAsSeconds()) * SIN_FORM * PI / 
            getPeriod().getTotalTimeAsSeconds()) * (getMaxVoltage() - getMinVoltage()) / SIN_FORM;
}
