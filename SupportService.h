#ifndef SUPPORTSERVICE_H
#define SUPPORTSERVICE_H

#include <string>
#include <iostream>

using namespace std;

class SupportService {
private:
    string contactinfo;
    string operatinghours;

public:
    SupportService(const string& contactInfo, const string& operatingHours);
    void print() const;
    string getContact();
};

#endif 