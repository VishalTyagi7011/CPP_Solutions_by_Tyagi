//============================================================================
// Name        : Variable.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	//integer defining
	int age=22;
	cout<<"I am "<<age<<" year old\n";


	// addition of two number
	int num1=5;
	int num2=8;
	int sum=num1+num2;
	cout<<sum<<"\n";

	//sum of three number without declaring them
	 cout<<7+5+9<<"\n";

	 // checking if all intefer have same number
	 int a,b,c;
	 a=b=c=20;
	 cout<<a+b+c<<endl;


	 //const keywords
	const int mynum=10;
	//mynum=10;// there will be error
	cout<<mynum<<endl;


	return 0;
}
