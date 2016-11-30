/*
 * Scott Downey
 * scott.m.downey@gmail.com
 * C/C++ Programming III : Intermediate Programming with Objects, 114426, Raymond Mitchell III
 * May 29, 2016
 * PressureSensor.cpp
 * Windows 10
 * Visual Studio Community 2015
 *
 * This source code defines the class 'PressureSensor'
 *
 */

#include "PressureSensor.h"
const string UNIT = "Pounds per square inch (PSI)";

//constructor for class 'PressureSensor'
Project2::PressureSensor::PressureSensor(string name, Signal & source) : Sensor(name, source) {}

//function to return the type of units the sensor ouputs
string Project2::PressureSensor::getUnits() const
{
    return UNIT;
}
