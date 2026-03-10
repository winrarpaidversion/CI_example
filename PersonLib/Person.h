#pragma once
#include<string>
class Person
{
public:
	enum Gender{MALE, FEMALE, NONBINARY};
private:
	int age;
	std::string name;
	Gender gender;
public:
	std::string getName();
	int getAge();
	Gender getGender();

	Person(std::string n, int age);
	Person(std::string n);
	Person(int age);
	Person();
};

