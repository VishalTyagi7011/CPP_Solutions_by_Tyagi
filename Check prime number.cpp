//============================================================================
// Name        : Check.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int check_prime_fun(int num)
{
	int i;
	bool flag=false;
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			flag=true;
			break;
		}
	}
	if (flag){
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int main() {
	int num;
	cout<<"Enter the number :";
	cin>>num;
	if(check_prime_fun(num) !=1)
	{
		cout<<num<<" is prime number.";
	}
	else
	{
		cout<<num<<" is not prime number.";
	}

	return 0;
}


