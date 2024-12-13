#include "Company.h"

Company::Company(const string& companyName) : companyName(companyName) {}

void Company::print() const {
    cout << "Transport Company: " << companyName << endl;
}

void Company::updateName(const string& newName) {
    companyName = newName;
}