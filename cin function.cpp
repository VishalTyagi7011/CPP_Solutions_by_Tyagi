//============================================================================
// Name        : cin.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int age;
	cout<<"enter your age:";
	cin>>age;
	cout<<"my age is "<<age <<" \n";


	// addition of two number
	int num1, num2,sum;
	cout<<"enter 1st number: ";
	cin>>num1;
	cout<<"enter 2nd number:";
	cin>>num2;
	sum=num1+num2;
//	multiply=num1*num2;
	cout<<"sum of both number is :"<<sum<<endl;

	return 0;
}
