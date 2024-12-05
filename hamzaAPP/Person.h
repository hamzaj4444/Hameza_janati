#pragma once
using namespace System;

public ref class Person
{
private:
    String^ name;
    int age;
    String^ type;

public:
    Person(String^ name, int age, String^ type) : name(name), age(age), type(type) {}

    String^ getName() { return name; }
    int getAge() { return age; }
    String^ getType() { return type; }

    String^ getDetails()
    {
        return "Name: " + name + ", Age: " + age + ", Type: " + type;
    }
};