/*
 * Scott Downey
 * scott.m.downey@gmail.com
 * C/C++ Programming III : Intermediate Programming with Objects, 114426, Raymond Mitchell III
 * May 29, 2016
 * TemperatureSensor.cpp
 * Windows 10
 * Visual Studio Community 2015
 *
 * This source code defines the class 'TemperatureSensor'
 *
 */

#include "TemperatureSensor.h"

const string UNIT = "Degrees Celsius";

//constructor for class 'TemperatureSensor'
Project2::TemperatureSensor::TemperatureSensor(string name, Signal & source) :
    Sensor(name, source) {}

//function to return the type of units the sensor ouputs
string Project2::TemperatureSensor::getUnits() const
{
    return UNIT;
}
