//============================================================================
// Name        : Function.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class base
{
public:
	base()
	{
		cout<<"base class is callling "<<endl;
	}

	void add(int a, int b)
	{
		int sum=a+b;
		cout<<"sum of both number :"<<sum<<endl;
	}
	void add(int a, int b,int c)
	{
		int sum=a+b+c;
		cout<<"sum of all number :"<<sum<<endl;
	}
	void add(float a, int b)
	{
		float sum=a+b;
		cout<<"sum of both number :"<<sum<<endl;
	}


};

int main() {
	base obj;
	obj.add(2,4);
	obj.add(float(4.6),7);
	obj.add(3,6,9);

	return 0;
}
