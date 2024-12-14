#ifndef DESTINATION_H
#define DESTINATION_H

#include <string>
#include <iostream>

using namespace std;

class Destination {
private:
    string name;
    string description;

public:
    Destination(const string& name, const string& description);
    void print() const;
    string getDiscription();
};

#endif