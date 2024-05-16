//============================================================================
// Name        : Reverse.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int reverse_func(int num)
{

	int reminder=0;
	int output=0;

	while(num>0)
	{
		reminder=num%10;
		output=output*10 +reminder;
		num=num/10;
	}
	return output;
}

int main() {
	int num;
	cout<<"Enter the number :";
	cin>>num;
	cout<<reverse_func(num);

	return 0;
}
