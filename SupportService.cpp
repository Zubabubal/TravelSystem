#include "SupportService.h"

SupportService::SupportService(const string& contactInfo, const string& operatingHours)
    : contactInfo(contactInfo), operatingHours(operatingHours) {}

void SupportService::print() const {
    cout << "Contact Info: " << contactInfo << "\nOperating Hours: " << operatingHours << endl;
}

string SupportService::getContact() {
    return contactInfo;
}