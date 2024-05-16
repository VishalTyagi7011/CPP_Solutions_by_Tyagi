//============================================================================
// Name        : Character_arrays.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	char arr[10];
     cin>>arr;
	int i=0;
	while(arr[i]!='\0')
	{
		cout<<arr[i]<<" ";
		i++;
	}
	return 0;
}
