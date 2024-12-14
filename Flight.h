#ifndef FLIGHT_H
#define FLIGHT_H

#include <string>
#include <iostream>

using namespace std;

class Flight {
private:
    string date;
    string flighttime;
    string arrivaltime;
    string numberofflight;

public:
    Flight(const string date, const string flightTime, const string arrivalTime, const string numberOfFlight);
    void print() const;
    string getdate();
    void chagenumberIfFlight(const string& newNumber);
};

#endif 