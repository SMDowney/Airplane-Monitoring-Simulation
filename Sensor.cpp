/*
 * Scott Downey
 * scott.m.downey@gmail.com
 * C/C++ Programming III : Intermediate Programming with Objects, 114426, Raymond Mitchell III
 * May 29, 2016
 * Sensor.cpp
 * Windows 10
 * Visual Studio Community 2015
 *
 * This source code defines the class 'Sensor'
 *
 */

#include "Sensor.h"
#include "Signal.h"
using Project2::Signal;

//constructor to abstract class 'Sensor'
Project2::Sensor::Sensor(string name, Signal & source) : name(name), source(source) {}

//function to initiate a reading of the sensor from a signal
void Project2::Sensor::takeReading(Time t, DataRecorder & recorder)
{
    recorder.log(t, name, source.getVoltageAtTime(t), getUnits());
}

//function to access the 'name' data member
string Project2::Sensor::getName() const
{
    return name;
}

//function to access the 'source' data member
Signal & Project2::Sensor::getSource() const
{
    return source;
}
