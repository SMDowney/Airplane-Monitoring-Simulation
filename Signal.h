/*
 * Scott Downey
 * scott.m.downey@gmail.com
 * C/C++ Programming III : Intermediate Programming with Objects, 114426, Raymond Mitchell III
 * May 29, 2016
 * Signal.h
 * Windows 10
 * Visual Studio Community 2015
 *
 * This source code declares the class 'Signal'
 *
 */

#ifndef SIGNAL_H
#define SIGNAL_H

#include "Time.h"

namespace Project2
{
    class Signal
    {
    public:
        Signal(double valueOffset, Time timeOffset);
        virtual double getVoltageAtTime(Time t) const = 0;

    protected:
        double getVoltageOffset() const;
        Time getTimeOffset() const;

    private:
        double voltageOffset;
        Time timeOffset;
    };
}
#endif
