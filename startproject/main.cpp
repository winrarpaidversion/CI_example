#include<iostream>
#include"../PersonLib/Person.h"
using namespace std;

int main()
{
	Person p = { "Oleg Mongol", 36 };

	cout << p.getName() << endl;

	return 0;
}