#include "Person.h"

std::string Person::getName()
{
    return name;
}

int Person::getAge()
{
    return age;
}

Person::Gender Person::getGender()
{
    return gender
}

Person::Person(std::string n, int age, Gender g) : name{n}, age{age}, gender{g}
{
    if (name.empty())
        name = "Undefined";
    if (name.size() > 40)
        name.erase(name.begin() + 40, name.end());
    if (age < 0 || age > 100)
        age = 0;
    if (gender < UNDEF || gender > FEMALE)
        gender = UNDEF;
}

Person::Person(std::string n, int age) : Person(n, age, UNDEF)
{
}

Person::Person(int age, Gender g) : Person("Undefined", age, g)
{
}

Person::Person(std::string n) : Person(n, 0, Person::UNDEF)
{
}

Person::Person(int age) : Person("Undefined", age, Person::UNDEF)
{
}

Person::Person(Gender g) : Person("Undefined", 0, g)
{
}

Person::Person() : Person("Undefined", 0, Person::UNDEF)
{
}
