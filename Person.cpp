#include "Person.h"

Person::Person(const string& firstName, const string& secondName, int age)
    : firstName(firstName), secondName(secondName), age(age) {}

void Person::print() const {
    cout << "Person information: " << firstName << " " << secondName << ", Age: " << age << endl;
}

string Person::getFullName() const {
    return firstName + " " + secondName;
}

int Person::getAge() const {
    return age;
}

bool Person::isAdult() const {
    return age >= 18;
}