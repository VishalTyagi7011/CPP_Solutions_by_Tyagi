//============================================================================
// Name        : operator.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class Operators
{
public:
	void operator+(Operators obj)
	{
		cout<<"operator overloading";
	}
};

int main() {
  Operators obj1,obj2;
  obj1+obj2;
	return 0;
}
