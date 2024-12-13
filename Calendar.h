#ifndef CALENDAR_H
#define CALENDAR_H

#include <string>
#include <iostream>
#include "Destination.h"

using namespace std;

class Calendar {
private:
    string eventDate;
    Destination eventDescription;

public:
    Calendar(const string& eventDate, const Destination& eventDescription);
    void print() const;
    void getDescription();
};

#endif 