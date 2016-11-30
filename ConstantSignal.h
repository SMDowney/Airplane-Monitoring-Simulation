/*
 * Scott Downey
 * scott.m.downey@gmail.com
 * C/C++ Programming III : Intermediate Programming with Objects, 114426, Raymond Mitchell III
 * May 29, 2016
 * ConstantSignal.h
 * Windows 10
 * Visual Studio Community 2015
 *
 * This source code declares the class 'ConstantSignal'
 *
 */

#ifndef CONSTANTSIGNAL_H
#define CONSTANTSIGNAL_H

#include "Signal.h"

namespace Project2
{
    class ConstantSignal : public Signal
    {
    public:
        ConstantSignal(double voltageOffset, Time timeOffset);
        double getVoltageAtTime(Time t) const;
    };
}
#endif
