/*
 * Scott Downey
 * scott.m.downey@gmail.com
 * C/C++ Programming III : Intermediate Programming with Objects, 114426, Raymond Mitchell III
 * May 29, 2016
 * TemperatureSensor.h
 * Windows 10
 * Visual Studio Community 2015
 *
 * This source code declares the class 'TemperatureSensor'
 *
 */

#ifndef TEMPERATURESENSOR_H
#define TEMPERATURESENSOR_H

#include "Sensor.h"

namespace Project2
{
    class TemperatureSensor : public Sensor
    {
    public:
        TemperatureSensor(string name, Signal &source);

    protected:
        string getUnits() const;

    };
}
#endif
