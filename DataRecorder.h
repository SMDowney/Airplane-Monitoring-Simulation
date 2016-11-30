/*
 * Scott Downey
 * scott.m.downey@gmail.com
 * C/C++ Programming III : Intermediate Programming with Objects, 114426, Raymond Mitchell III
 * May 29, 2016
 * DataRecorder.h
 * Windows 10
 * Visual Studio Community 2015
 *
 * This source code declares the class 'DataRecorder'
 *
 */

#ifndef DATARECORDER_H
#define DATARECORDER_H

#include <iostream>
using std::ostream;

#include <string>
using std::string;

#include "Time.h"

namespace Project2
{
    class DataRecorder
    {
    public:
        DataRecorder(ostream & out);
        void log(Time timestamp, string sensorName, double sensorVoltage, string sensorUnits);

    private:
        ostream & out;
    };
}
#endif
