//============================================================================
// Name        : Diamond.cpp
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
	A()
	{
		cout<<"A class is calling"<<endl;
	}
};
class B:public A
{
public:
	B()
	{
		cout<<"B class is calling"<<endl;
	}
};
class E:public A
{
public:
	E()
	{
		cout<<"E class is calling"<<endl;
	}
};
class C:public B
{
public:
	C()
	{
		cout<<"C class is calling"<<endl;
	}
};
class F:public E
{
public:
	F()
	{
		cout<<"F class is calling"<<endl;
	}
};

class D:public C, public F

{
public:
	D()
	{
		cout<<"D class is calling"<<endl;
	}

};
int main() {
	D obj;

	return 0;
}
