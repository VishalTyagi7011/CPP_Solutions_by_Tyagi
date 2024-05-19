//============================================================================
// Name        : check.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int fibonaci(int num)
{
	if(num==0)
	{
		return 0;
	}
        num--;
		return fibonaci(num-1)+fibonaci(num-2);

}


int main() {
	int number,reminder,quotient,output=0;
	cout<<"enter the number :";
	cin>>number;
	quotient=number;
	while(quotient>0)
	{
		reminder=quotient%10;
		quotient=quotient/10;
		output=(output*10)+reminder;


	}
	if(number==output)
	{
		cout<<"number is palindrme";
	}
	else
	{
		cout<<"not palindrome";
	}

	cout<<endl<<fibonaci(8)<<" ";


	return 0;
}
