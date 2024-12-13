#include "Destination.h"

Destination::Destination(const string& name, const string& description)
    : name(name), description(description) {}

void Destination::print() const {
    cout << "Destination: " << name << "\nDescription: " << description << endl;
}

string Destination::getDiscription() {
    return description;
}