//============================================================================
// Name        : operator.cpp
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
	int a;
	int b;

	void operator+(A obj)
	{

		cout<<"operator is overloading";
	}

};

int main() {
	A obj1, obj2;
	obj1+obj2;
	return 0;
}
