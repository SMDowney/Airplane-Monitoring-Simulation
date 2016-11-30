/*
 * Scott Downey
 * scott.m.downey@gmail.com
 * C/C++ Programming III : Intermediate Programming with Objects, 114426, Raymond Mitchell III
 * May 29, 2016
 * AngularSensor.cpp
 * Windows 10
 * Visual Studio Community 2015
 *
 * This source code defines the class 'AngularSensor'
 *
 */

#include "AngularSensor.h"

const string UNIT = "Radians";

//constructor for class 'AngularSensor'
Project2::AngularSensor::AngularSensor(string name, Signal & source) : Sensor(name, source) {}

//function to return the type of units the sensor ouputs
string Project2::AngularSensor::getUnits() const
{
    return UNIT;
}
