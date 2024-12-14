#ifndef TOUR_H
#define TOUR_H

#include <string>
#include <iostream>
#include "Guide.h"

using namespace std;

class Tour {
private:
    string title;
    string description;
    double price;
    Guide guide;

public:
    Tour(const string& title, const string& description, double price, const Guide& guide);
    void print() const;
    void getGuideLanguage();
    string getDescription();
};

#endif 