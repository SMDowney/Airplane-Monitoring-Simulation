/*
 * Scott Downey
 * scott.m.downey@gmail.com
 * C/C++ Programming III : Intermediate Programming with Objects, 114426, Raymond Mitchell III
 * May 29, 2016
 * MonitoringSystem.cpp
 * Windows 10
 * Visual Studio Community 2015
 *
 * This source code defines the class 'MonitoringSystem'
 *
 */

#include "MonitoringSystem.h"

const int MAX_SENSORS = 15;

//constructor for class 'MonitoringSystem'
Project2::MonitoringSystem::MonitoringSystem(ostream & out)
{
    recorder = new DataRecorder(out);
    sensors = new Sensor *[MAX_SENSORS];
    count = 0;
}

//destructor for class 'MonitoringSystem'
Project2::MonitoringSystem::~MonitoringSystem()
{
    delete recorder;
    delete[] sensors;
}

//function to add a sensor to the monitoring system
void Project2::MonitoringSystem::addSensor(Sensor * s)
{
    sensors[count++] = s;
}

//function to take a reading from the sensors in the monitoring system
void Project2::MonitoringSystem::takeReading(Time t)
{
    for (int index = 0; index < count; ++index)
        (*sensors[index]).takeReading(t, *recorder);
}
