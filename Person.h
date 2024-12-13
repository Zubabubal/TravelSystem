#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

using namespace std;

class Person {
private:
    string firstName;
    string secondName;
    int age;

public:
    Person(const string& firstName, const string& secondName, int age);

    void print() const;

    string getFullName() const;

    int getAge() const;

    bool isAdult() const;
};

#endif 