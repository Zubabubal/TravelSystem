#include "Transport.h"

Transport::Transport(const string& type, const Company& comp)
    : transportType(type), company(comp) {}

void Transport::print() const {
    cout << "Transport Type: " << transportType << endl;
    company.print();
}

string Transport::getTransportType() const {
    return transportType;
}