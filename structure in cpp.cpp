//============================================================================
// Name        : structure.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
struct Student
{
	string name;
	int age;
	int roll;
};

int main() {
	Student obj;
	obj.name="vishal";
	obj.age=23;
	cout<<obj.name;
	return 0;
}
