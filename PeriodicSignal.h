/*
 * Scott Downey
 * scott.m.downey@gmail.com
 * C/C++ Programming III : Intermediate Programming with Objects, 114426, Raymond Mitchell III
 * May 29, 2016
 * PeriodicSignal.h
 * Windows 10
 * Visual Studio Community 2015
 *
 * This source code declares the class 'AngularSensor' 
 *
 */

#ifndef PERIODICSIGNAL_H
#define PERIODICSIGNAL_H

#include "Signal.h"

namespace Project2
{
    class PeriodicSignal : public Signal
    {
    public:
        PeriodicSignal(double voltageOffset, Time timeOffset, double minVoltage, double maxVoltage, Time period);
        virtual double getVoltageAtTime(Time t) const = 0;

    protected:
        double getMinVoltage() const;
        double getMaxVoltage() const;
        Time getPeriod() const;

    private:
        double minValue;
        double maxValue;
        Time period;
    };
}
#endif
