#ifndef SUPPORTSERVICE_H
#define SUPPORTSERVICE_H

#include <string>
#include <iostream>

using namespace std;

class SupportService {
private:
    string contactInfo;
    string operatingHours;

public:
    SupportService(const string& contactInfo, const string& operatingHours);
    void print() const;
    string getContact();
};

#endif 