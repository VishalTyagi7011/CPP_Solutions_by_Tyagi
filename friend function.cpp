//============================================================================
// Name        : friend.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class parent
{
	string name;
	 int age;
	long long int phone;
public:

	parent(string name , int age, long long int number)
	{
     this->name=name;
     this->age=age;
     phone=number;
	}

	friend void print(parent &obj);

};

void print(parent &obj)
{
	cout<<obj.age<<endl<<obj.name<<endl<<obj.phone;
}

int main() {
	parent obj("vishla",23,7011315126);
	print(obj);

	return 0;
}
