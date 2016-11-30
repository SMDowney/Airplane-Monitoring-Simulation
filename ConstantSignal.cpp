/*
 * Scott Downey
 * scott.m.downey@gmail.com
 * C/C++ Programming III : Intermediate Programming with Objects, 114426, Raymond Mitchell III
 * May 29, 2016
 * ConstantSignal.cpp
 * Windows 10
 * Visual Studio Community 2015
 *
 * This source code defines the class 'ConstantSignal'
 *
 */

#include "ConstantSignal.h"

//constructor for class 'ConstantSignal' (calls base class 'Signal's constructor)
Project2::ConstantSignal::ConstantSignal(double voltageOffset, Time timeOffset) :
    Signal(voltageOffset, timeOffset) {};

//function to return the voltage at a given time (overriding pure virtual function)
double Project2::ConstantSignal::getVoltageAtTime(Time t) const
{
    return getVoltageOffset();
}
