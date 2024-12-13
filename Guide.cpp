#include "Guide.h"

Guide::Guide(const string& name, const string& language)
    : name(name), language(language) {}

void Guide::print() const {
    cout << "Guide: " << name << "\nLanguage: " << language << endl;
}

void Guide::changeLanguage(const string& NewLang) {
    language = NewLang;
}

string Guide::getLanguage() {
    return language;
}