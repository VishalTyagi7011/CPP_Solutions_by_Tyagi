//============================================================================
// Name        : Armstrong.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
using namespace std;

int check_armstng_func(int num)
{
	int sum=0;
	int quotient=0;
	int num1=num;
	int power=0;


	while(num1>0)
	{
		quotient=num1%10;
		power=pow(quotient,3);
		sum=sum+power;
		num1=num1/10;
	}
	if(sum==num)
	{
		return true;
	}
	return false;
}

int main() {
	int num=378;
	if(check_armstng_func(num)==1)
	{
		cout<<"number is armstrong.";
	}
	else
	{
		cout<<"number is not armstrong";
	}
	return 0;
}
