/*
 * Scott Downey
 * scott.m.downey@gmail.com
 * C/C++ Programming III : Intermediate Programming with Objects, 114426, Raymond Mitchell III
 * May 29, 2016
 * AngularSensor.h
 * Windows 10
 * Visual Studio Community 2015
 *
 * This source code declares the class 'AngularSensor'
 *
 */

#ifndef ANGULARSENSOR_H
#define ANGULARSENSOR_H

#include "Sensor.h"

namespace Project2
{
    class AngularSensor : public Sensor
    {
    public: 
        AngularSensor(string name, Signal & source);

    protected:
        string getUnits() const;

    };
}
#endif
