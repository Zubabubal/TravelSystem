#ifndef PACKAGE_H
#define PACKAGE_H

#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Package {
private:
    vector<string> services;
    double totalPrice;

public:
    Package(const vector<string>& services, double totalPrice);
    void print() const;
};

#endif 