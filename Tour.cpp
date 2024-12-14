#include "Tour.h"

Tour::Tour(const string& title, const string& description, double price, const Guide& guide)
    : title(title), description(description), price(price), guide(guide) {}

void Tour::print() const {
    cout << "Tour: " << title << "\nDescription: " << description << "\nPrice: $" << price << endl;
    guide.print();
}

void Tour::getGuideLanguage() {
    guide.getLanguage();
}

string Tour::getDescription() {
    return description;
}