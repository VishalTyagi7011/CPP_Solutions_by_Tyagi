//============================================================================
// Name        : OOPS_basic.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string>
using namespace std;

//creating a class
class Student
{
public:
	string name;
	int age;
	char sex;


};

int main() {

	// Object initialization
	Student Obj;
	// checking size of class 'Student' , it is 40 bytes
	cout << "size of \"Student\" class is :" << sizeof(Obj)<<endl;

	//Assigning the value to data members
	Obj.name="vishal";
	Obj.age=22;
	Obj.sex='M';

	// Accessing the class members
	cout<< "name is :"<<Obj.name<<endl;
	cout<<"age is :"<< Obj.age<<endl;
	cout<< "sex is :"<<Obj.sex<<endl;
	return 0;
}
