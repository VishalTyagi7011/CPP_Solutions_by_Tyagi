//============================================================================
// Name        : Insertion.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int arr[]={11,12,13,5,6};
	int size=sizeof(arr)/sizeof(arr[0]);
	int num, i, temp;
	for(i=1;i<size;i++)
	{
		num=i-1;
		while((arr[num]>arr[num+1] )&& (num>=0))
		{
			temp=arr[num];
			arr[num]=arr[num+1];
			arr[num+1]=temp;
			num--;
		}

	}
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}



	return 0;
}

