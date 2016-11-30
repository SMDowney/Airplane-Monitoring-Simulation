/*
 * Scott Downey
 * scott.m.downey@gmail.com
 * C/C++ Programming III : Intermediate Programming with Objects, 114426, Raymond Mitchell III
 * May 29, 2016
 * DataRecorder.cpp
 * Windows 10
 * Visual Studio Community 2015
 *
 * This source code defines the class 'DataRecorder'
 *
 */

#include "DataRecorder.h"
#include <iomanip>
using std::setprecision;
using std::fixed;

//constructor for 'DataRecorder' class
Project2::DataRecorder::DataRecorder(ostream & out) : out(out) {}

//function to log input to 'DataRecorder'
void Project2::DataRecorder::log(Time timestamp, string sensorName, 
    double sensorVoltage, string sensorUnits)
{ 
    out << timestamp << " - ";
    out << sensorName << " - ";
    out << fixed << setprecision(2) << sensorVoltage << " ";
    out << sensorUnits << "\n";
}
