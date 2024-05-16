//============================================================================
// Name        : print_number_decresing_by_recursion.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int decresing(int num)
{
	if(num==1)
	{
		return 1;
	}
	cout<<num<<" ";

	return decresing(num-1);
}
int increasing(int num,int count)
{
	if(num==count)
	{
		return num;
	}
	cout<<count<<" ";
//	count++;

	return  increasing(num,count+1);
}

int main() {
	int num=6;
	cout << decresing(num)<<endl;
	cout << increasing(num,1);
	return 0;
}
