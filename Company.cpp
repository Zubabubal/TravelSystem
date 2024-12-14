#include "Company.h"

Company::Company(const string& companyname) : companyname(companyname) {}

void Company::print() const {
    cout << "Transport Company: " << companyname << endl;
}

void Company::updateName(const string& newName) {
    companyname = newName;
}