/*
 * Scott Downey
 * scott.m.downey@gmail.com
 * C/C++ Programming III : Intermediate Programming with Objects, 114426, Raymond Mitchell III
 * May 29, 2016
 * Time.h
 * Windows 10
 * Visual Studio Community 2015
 *
 * This source code declares the class 'Time'
 *
 */

#ifndef TIME_H
#define TIME_H

#include <iostream>
using std::ostream;

namespace Project2
{
    class Time
    {
    public:
        Time(int hours, int minutes, int seconds);
        int getTotalTimeAsSeconds() const;
        Time & operator+=(const Time & rhs);
        friend ostream &operator<<(ostream &os, const Time &rhs);

    private:
        int seconds;
    };
}
#endif