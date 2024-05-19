//============================================================================
// Name        : Single.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class Department
{
public:
	string name="vishal";
	int age=40;
	int salary=85000;
};
class account:public Department
{
public:
	void temp()
	{
		cout<<"it is single inheritance example";
	}
};

int main() {
	account obj;
	cout<<"name is :"<<obj.name<<endl;
	obj.temp();
	return 0;
}
