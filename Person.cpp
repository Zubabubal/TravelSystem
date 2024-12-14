#include "Person.h"

Person::Person(const string& firstName, const string& secondName, int age)
    : firstname(firstName), secondname(secondName), age(age) {}

void Person::print() const {
    cout << "Person information: " << firstname << " " << secondname << ", Age: " << age << endl;
}

string Person::getFullName() const {
    return firstname + " " + secondname;
}

int Person::getAge() const {
    return age;
}

bool Person::isAdult() const {
    return age >= 18;
}