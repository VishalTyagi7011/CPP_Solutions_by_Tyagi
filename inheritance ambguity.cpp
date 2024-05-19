//============================================================================
// Name        : inheritance.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class A
{
public:
	void name()
	{
		cout<<"A class is calling";
	}
};
class B
{
public:
	void name()
	{
		cout<<"B class is calling";
	}
};

class C: public A,public B
{

};

int main() {
	C obj;
	obj.A::name();
	obj.B::name();


	return 0;
}
