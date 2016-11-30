/*
 * Scott Downey
 * scott.m.downey@gmail.com
 * C/C++ Programming III : Intermediate Programming with Objects, 114426, Raymond Mitchell III
 * May 29, 2016
 * Time.cpp
 * Windows 10
 * Visual Studio Community 2015
 *
 * This source code defines the class 'Time'
 *
 */

#include <iostream>
using std::cout;

#include "Time.h"

const int SECONDS_IN_MIN = 60;
const int SECONDS_IN_HOUR = 3600;

//constructor for class 'Time'
Project2::Time::Time(int hours, int minutes, int seconds)
{
    this->seconds = hours * SECONDS_IN_HOUR + minutes * SECONDS_IN_MIN + seconds;
}

//function to return 'seconds' member
int Project2::Time::getTotalTimeAsSeconds() const
{
    return seconds;
}

//function to overlaod the '+=' operator for 'Time'
Project2::Time & Project2::Time::operator+=(const Time & rhs)
{
    seconds += + rhs.getTotalTimeAsSeconds();

    return *this;
}

//function to overload the '<<' operator for 'Time'
ostream & Project2::operator<<(ostream & os, const Time & rhs)
{
    os << (rhs.getTotalTimeAsSeconds() / SECONDS_IN_HOUR) << "h:";
    os << (rhs.getTotalTimeAsSeconds() % SECONDS_IN_HOUR) / SECONDS_IN_MIN << "m:";
    os << (rhs.getTotalTimeAsSeconds() % SECONDS_IN_MIN) << "s";

    return os;
}
