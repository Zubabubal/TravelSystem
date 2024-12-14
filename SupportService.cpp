#include "SupportService.h"

SupportService::SupportService(const string& contactInfo, const string& operatingHours)
    : contactinfo(contactInfo), operatinghours(operatingHours) {}

void SupportService::print() const {
    cout << "Contact Info: " << contactinfo << "\nOperating Hours: " << operatinghours << endl;
}

string SupportService::getContact() {
    return contactinfo;
}