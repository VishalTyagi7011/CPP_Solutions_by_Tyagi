//============================================================================
// Name        : Member.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class outside_member
{
public :
	string name;
	int age;
	void print();
	outside_member(int age)
	{
		this->age=age;
		cout<<"base class is calling"<<endl;
	}
};
void printed()
{
	cout<<"Hello G"<<endl;
}
void outside_member::print()
{
	cout<<"this function is calling from outside the class"<<endl;
	printed();
}



int main() {
	outside_member obj(22);
	obj.print();
	return 0;
}
