/*
 * Scott Downey
 * scott.m.downey@gmail.com
 * C/C++ Programming III : Intermediate Programming with Objects, 114426, Raymond Mitchell III
 * May 29, 2016
 * PressureSensor.h
 * Windows 10
 * Visual Studio Community 2015
 *
 * This source code declares the class 'PressureSensor'
 *
 */


#ifndef PRESSURESENSOR_H
#define PRESSURESENSOR_H

#include "Sensor.h"

namespace Project2
{
    class PressureSensor : public Sensor
    {
    public:
        PressureSensor(string name, Signal &source);

    protected:
        string getUnits() const;
    };
}
#endif
