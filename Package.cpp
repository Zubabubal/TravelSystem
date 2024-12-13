#include "Package.h"

Package::Package(const vector<string>& services, double totalPrice)
    : services(services), totalPrice(totalPrice) {}

void Package::print() const {
    cout << "Package Services: ";
    for (const auto& service : services) {
        cout << service << " ";
    }
    cout << "\nTotal Price: $" << totalPrice << endl;
}