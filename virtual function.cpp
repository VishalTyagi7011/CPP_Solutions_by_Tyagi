//============================================================================
// Name        : virtual.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class Tara
{
public:
	virtual void print()
	{
		cout<<"class Tara is calling";
	}
};
class Satya:public Tara
{
public:
	void print()
	{
		cout<<"class Satya is calling";
	}
};
class Ravi :public Tara
{
	public:
	void print()
	{
		cout<<"class Ravi is calling";
	}
};

int main() {
   Tara*ptr;
   Satya obj1;
   Ravi obj2;
   ptr=&obj1;
   ptr->print();

	return 0;
}
