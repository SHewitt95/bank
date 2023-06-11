#pragma once
#include <string>

using std::string;

class Person {
private:
    int age;
    string name;
    int id;

public:
    Person(int a = 0, string n = "None", int id = 0);

    int get_age();
    string get_name();
    int get_id();

};

int Person::get_age() {
    return age;
}

string Person::get_name() {
    return name;
}

int Person::get_id() {
    return id;
}