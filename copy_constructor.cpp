//============================================================================
// Name        : copy_constructor.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Student
{
public:
	int age;
	int roll;

	Student(int age, int roll)
	{
		this->age=age;
		this->roll=roll;
	}
};

int main() {
	Student obj1(22,45);
	cout<<obj1.age<<endl;
	cout<<obj1.roll<<endl;

	Student obj2(obj1);// this is called copy constructor
	cout<<obj2.age<<endl;
	cout<<obj2.roll<<endl;

	return 0;
}
