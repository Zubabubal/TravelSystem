#include "Transport.h"

Transport::Transport(const string& type, const Company& comp)
    : transporttype(type), company(comp) {}

void Transport::print() const {
    cout << "Transport Type: " << transporttype << endl;
    company.print();
}

string Transport::getTransportType() const {
    return transporttype;
}