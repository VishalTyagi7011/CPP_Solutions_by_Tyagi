//============================================================================
// Name        : Check_palindrome.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{

	bool flag=true;
	int len;
	cout<<"Enter the lenght of array: ";
	cin>>len;

	char arr[len];
	cout<<"Enter the character in array: ";
	cin>>arr;

	for(int i=0;i<len;i++)
	{
		if(arr[i]!=arr[len-1-i]){
			flag=false;
			break;
		}
	}
	if(flag)
	{
		cout<<"string is palindrome";
	}
	else
	{
		cout<<"string is not palindrome";
	}
	return 0;
}
