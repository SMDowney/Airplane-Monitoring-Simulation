/*
 * Scott Downey
 * scott.m.downey@gmail.com
 * C/C++ Programming III : Intermediate Programming with Objects, 114426, Raymond Mitchell III
 * May 29, 2016
 * VibrationSensor.h
 * Windows 10
 * Visual Studio Community 2015
 *
 * This source code declares the class 'VibrationSensor'
 *
 */

#ifndef VIBRATIONSENSOR_H
#define VIBRATIONSENSOR_H

#include "Sensor.h"

namespace Project2
{
    class VibrationSensor : public Sensor
    {
    public:
        VibrationSensor(string name, Signal &source);

    protected:
        string getUnits() const;
    };
}
#endif
