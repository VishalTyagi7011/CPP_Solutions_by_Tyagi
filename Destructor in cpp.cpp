//============================================================================
// Name        : Destructor.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Base
{
public:
	string name;
	int age;
	int roll;

	Base(int aged,int roll)
	{
      this->age=aged;
      this->roll=roll;
	}

	~Base()
	{
		cout<<"Object is deleting"<<endl;
	}
};

int main() {

	Base *obj= new Base(22,23);
	delete (obj);

	cout<<obj->age<<endl;
	obj->name="vishal";
	cout<<obj->name;

	Base obj1(*obj);
	Base obj2(obj1);

	return 0;
}
