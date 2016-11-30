/*
 * Scott Downey
 * scott.m.downey@gmail.com
 * C/C++ Programming III : Intermediate Programming with Objects, 114426, Raymond Mitchell III
 * May 29, 2016
 * SineSignal.h
 * Windows 10
 * Visual Studio Community 2015
 *
 * This source code declares the class 'SineSignal'
 *
 */

#ifndef SINESIGNAL_H
#define SINESIGNAL_H

#include "PeriodicSignal.h"

namespace Project2
{
    class SineSignal : public PeriodicSignal
    {
    public:
        SineSignal(double voltageOffset, Time timeOffset, double minVoltage, double maxVoltage, Time period);
        double getVoltageAtTime(Time t) const;

    };
}
#endif
