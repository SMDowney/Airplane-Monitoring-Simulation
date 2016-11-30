/*
 * Scott Downey
 * scott.m.downey@gmail.com
 * C/C++ Programming III : Intermediate Programming with Objects, 114426, Raymond Mitchell III
 * May 29, 2016
 * VibrationSensor.cpp
 * Windows 10
 * Visual Studio Community 2015
 *
 * This source code defines the class 'VibrationSensor'
 *
 */

#include "VibrationSensor.h"

const string UNIT = "Hertz (Hz)";

//constructor for class 'VibrationSensor'
Project2::VibrationSensor::VibrationSensor(string name, Signal & source) : Sensor(name, source) {}

//function to return the type of units the sensor ouputs
string Project2::VibrationSensor::getUnits() const
{
    return UNIT;
}
