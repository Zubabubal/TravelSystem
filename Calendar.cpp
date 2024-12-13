#include "Calendar.h"

Calendar::Calendar(const string& eventDate, const Destination& eventDescription)
    : eventDate(eventDate), eventDescription(eventDescription) {}

void Calendar::print() const {
    cout << "Event Date: " << eventDate << endl;
    cout << "Event Description: " << endl;
    eventDescription.print();
}

void Calendar::getDescription() {
    eventDescription.getDiscription();
}