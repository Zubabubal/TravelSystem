#include "Calendar.h"

Calendar::Calendar(const string& eventdate, const Destination& eventdescription)
    : eventdate(eventdate), eventDescription(eventdescription) {}

void Calendar::print() const {
    cout << "Event Date: " << eventdate << endl;
    cout << "Event Description: " << endl;
    eventDescription.print();
}

void Calendar::getDescription() {
    eventDescription.getDiscription();
}