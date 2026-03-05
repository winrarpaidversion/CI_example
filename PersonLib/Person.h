#pragma once
#include<string>
class Person
{
private:
	int age;
	std::string name;
public:
	std::string getName();
	int getAge();

	Person(std::string n, int age);
	Person(std::string n);
	Person(int age);
	Person();
};

