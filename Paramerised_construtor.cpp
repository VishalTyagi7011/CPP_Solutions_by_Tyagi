//============================================================================
// Name        : Paramerised_construtor.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


class Employees
{
public:
	int emp_id;
	string name;
	int age;
	Employees(int emp_id,int age)
	{
		this->emp_id=emp_id;
		this->age=age;
	}
	Employees()
	{
		cout<<"constructor calling"<<endl;
	}
};

int main() {
	Employees account(435,16);
	cout<<account.emp_id<<endl;
	cout<<account.age<<endl;

	Employees HR;

	return 0;
}
