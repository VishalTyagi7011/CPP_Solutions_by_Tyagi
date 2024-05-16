//============================================================================
// Name        : Max_sum_subarray_with_O(n2).cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int arr[]={1,-1,3,2,1};
	int size=sizeof(arr)/sizeof(arr[0]);
	int temp[size];
	int summ=0,maxx=0;
	for(int i=0;i<size;i++)
	{
		summ=summ+arr[i];
		temp[i]=summ;
	}
	for(int i=0;i<size;i++)
	{
		if(temp[i]>maxx)
			{
				maxx=temp[i];
			}

	}
cout<<maxx;

	return 0;
}
