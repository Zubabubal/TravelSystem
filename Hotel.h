#ifndef HOTEL_H
#define HOTEL_H

#include <string>
#include <iostream>

using namespace std;

class Hotel {
private:
    string Name;
    string location;
    int NumStars;

public:
    Hotel(const string Name, const string location, const int NumStars);
    void print() const;
    string getlocation();
    int getNumStars();
};

#endif 