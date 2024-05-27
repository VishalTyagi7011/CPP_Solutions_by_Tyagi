//============================================================================
// Name        : Encapsulation.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class encapsulation
{
	string name;
	int age;
public:
	void set_data(int age, string name)
	{
		this->age=age;
		this->name=name;
	}

	void get_data()
	{
		cout<<"age is :"<<age<<endl;
		cout<<"name is :"<<name<<endl;
	}
};

int main() {
	encapsulation *obj=new encapsulation();
	obj->set_data(22,"vishal");
	obj->get_data();
	return 0;
}
