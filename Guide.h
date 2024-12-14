#ifndef GUIDE_H
#define GUIDE_H

#include <string>
#include <iostream>

using namespace std;

class Guide {
private:
    string name;
    string language;

public:
    Guide(const string& name, const string& language);
    void print() const;
    void changeLanguage(const string& NewLang);
    string getLanguage();
};

#endif 