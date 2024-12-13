#include "Hotel.h"

Hotel::Hotel(const string Name, const string location, const int NumStars)
    : Name(Name), location(location), NumStars(NumStars) {}

void Hotel::print() const {
    cout << "Hotel information:\t" << "Hotel name:\t" << Name << " Hotel location:\t" << location << " Number of hotel stars:\t" << NumStars << endl;
}

string Hotel::getlocation() {
    return location;
}

int Hotel::getNumStars() {
    return NumStars;
}