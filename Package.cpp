#include "Package.h"

Package::Package(const vector<string>& services, double totalPrice)
    : services(services), totalprice(totalPrice) {}

void Package::print() const {
    cout << "Package Services: ";
    for (const auto& service : services) {
        cout << service << " ";
    }
    cout << "\nTotal Price: $" << totalprice << endl;
}