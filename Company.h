#ifndef COMPANY_H
#define COMPANY_H

#include <string>
#include <iostream>

using namespace std;

class Company {
private:
    string companyName;

public:
    Company(const string& companyName);

    void print() const;

    void updateName(const string& newName);
};

#endif 