#include "Hotel.h"

Hotel::Hotel(const string Name, const string location, const int NumStars)
    : name(Name), location(location), numstars(NumStars) {}

void Hotel::print() const {
    cout << "Hotel information:\t" << "Hotel name:\t" << name << " Hotel location:\t" << location << " Number of hotel stars:\t" << numstars << endl;
}

string Hotel::getlocation() {
    return location;
}

int Hotel::getNumStars() {
    return numstars;
}