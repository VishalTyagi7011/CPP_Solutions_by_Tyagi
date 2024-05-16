//============================================================================
// Name        : factorial_by_recursion.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int factorials(int num)
{
if (num==0)
{
	return 1;
}
//num--;
return (num)*(factorials(num-1));
}

int main() {
	int a=5;
	cout<<factorials(a);
	return 0;
}
