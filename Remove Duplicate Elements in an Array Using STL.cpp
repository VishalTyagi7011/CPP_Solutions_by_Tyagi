//============================================================================
// Name        : Remove.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<set>
using namespace std;

int main() {
	int arr[]={1,7,4,9,6,2,4,8,6,9,0,2,5};
	int size=sizeof(arr)/sizeof(arr[0]);

	set <int>array(arr,arr+size);
	int temp[array.size()];
	int i=0;
	for(int element:array)
	{
		temp[i]=element;
		i++;
	}
	for(int element:temp)
	{
		cout<<element<<" ";
	}
	return 0;
}
