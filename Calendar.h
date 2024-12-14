#ifndef CALENDAR_H
#define CALENDAR_H

#include <string>
#include <iostream>
#include "Destination.h"

using namespace std;

class Calendar {
private:
    string eventdate;
    Destination eventDescription;

public:
    Calendar(const string& eventdate, const Destination& eventdescription);
    void print() const;
    void getDescription();
};

#endif 