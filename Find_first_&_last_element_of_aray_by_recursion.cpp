//============================================================================
// Name        : Find_first_&_last_element_of_aray_by_recursion.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// In first_element() function , index will be from 0;
int first_element(int arr[],int size,int element,int index)
{
	if(arr[index]==element)
	{
		return index;
	}
	return first_element(arr,size-1,element,index+1);
}
// In last_element() function , index will be from last;
int last_element(int arr[],int size,int element,int index)
{
	if(arr[index]==element)
	{
		return index;
	}
	return last_element(arr,size-1,element,index+1);
}

int main() {
	int arr[]={1,2,3,4,55,4,3,2,4,55};
	int sizes=sizeof(arr)/sizeof(arr[0]);
	cout<<first_element(arr,sizes,55,0);
	return 0;
}
