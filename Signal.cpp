/*
 * Scott Downey
 * scott.m.downey@gmail.com
 * C/C++ Programming III : Intermediate Programming with Objects, 114426, Raymond Mitchell III
 * May 29, 2016
 * Signal.cpp
 * Windows 10
 * Visual Studio Community 2015
 *
 * This source code defines the class 'Signal'
 *
 */

#include "Signal.h"
#include "Time.h"
using Project2::Time;

//constructor for abstract class 'Signal'
Project2::Signal::Signal(double valueOffset, Time timeOffset) :
    voltageOffset(valueOffset), timeOffset(timeOffset) {}

//function to return data member 'voltageOffset'
double Project2::Signal::getVoltageOffset() const
{
    return voltageOffset;
}

//function to return data member 'timeOffset'
Time Project2::Signal::getTimeOffset() const
{
    return timeOffset;
}
