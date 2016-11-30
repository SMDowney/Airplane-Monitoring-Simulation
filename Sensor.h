/*
 * Scott Downey
 * scott.m.downey@gmail.com
 * C/C++ Programming III : Intermediate Programming with Objects, 114426, Raymond Mitchell III
 * May 29, 2016
 * Sensor.h
 * Windows 10
 * Visual Studio Community 2015
 *
 * This source code declares the class 'Sensor'
 *
 */

#ifndef SENSOR_H
#define SENSOR_H

#include <string>
using std::string;

#include "Signal.h"
#include "DataRecorder.h"

namespace Project2
{
    class Sensor
    {
    public:
        Sensor(string name, Signal &source);
        void takeReading(Time t, DataRecorder &recorder);

    protected:
        virtual string getUnits() const = 0;
        string getName() const;
        Signal & getSource() const;

    private:
        string name;
        Signal &source;

    };
}
#endif
