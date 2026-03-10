#pragma once
#include<string>
class Person
{
public:
	enum Gender{MALE, FEMALE, UNDEF};
private:
	int age;
	std::string name;
	Gender gender;
public:
	std::string getName();
	int getAge();
	Gender getGender();

	Person(std::string n, int age, Gender g);
	Person(std::string n, int age);
	Person(int age, Gender g);
	Person(std::string n);
	Person(int age);
	Person(Gender g);
	Person();
};

