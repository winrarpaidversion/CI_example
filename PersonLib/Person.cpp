#include "Person.h"

std::string Person::getName()
{
    return name;
}

int Person::getAge()
{
    return age;
}

Person::Person(std::string n, int age) : name{n}, age{age}
{
    if (name.size() > 40)
        name.erase(name.begin() + 40, name.end());
    if (age < 0 || age > 100)
        age = 0;
}

Person::Person(std::string n) : Person(n, 0)
{
}

Person::Person(int age) : Person("Undefined", age)
{
}

Person::Person() : Person("Undefined", 0)
{
}
