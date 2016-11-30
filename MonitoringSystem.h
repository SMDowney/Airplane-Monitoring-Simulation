/*
 * Scott Downey
 * scott.m.downey@gmail.com
 * C/C++ Programming III : Intermediate Programming with Objects, 114426, Raymond Mitchell III
 * May 29, 2016
 * MonitoringSystem.h
 * Windows 10
 * Visual Studio Community 2015
 *
 * This source code declares the class 'MonitoringSystem'
 *
 */

#ifndef MONITORINGSYSTEM_H
#define MONITORINGSYSTEM_H

#include <iostream>
using std::ostream;

#include "Sensor.h"
#include "Time.h"

namespace Project2
{
    class MonitoringSystem
    {
    public:
        MonitoringSystem(ostream &out);
        ~MonitoringSystem();
        void addSensor(Sensor *s);
        void takeReading(Time t);

    private:
        DataRecorder *recorder;
        Sensor **sensors;
        int count;
    };
}
#endif
