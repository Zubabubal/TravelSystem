#ifndef TRANSPORT_H
#define TRANSPORT_H

#include "Company.h"
#include <string>
#include <iostream>

using namespace std;

class Transport {
private:
    Company company;
    string transporttype;

public:
    Transport(const string& type, const Company& comp);
    void print() const;
    string getTransportType() const;
};

#endif 