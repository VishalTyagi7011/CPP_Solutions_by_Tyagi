//============================================================================
// Name        : Remove_duplicate_from_array.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<algorithm>
using namespace std;


int main() {
	int arr[]={1,2,3,4,3,2,6,9,5,6,1,9};
	int size=sizeof(arr)/sizeof(arr[0]);
	int count=0;
	sort(arr,arr+size);
    for(int i=0;i<size-count-1;i++)
	 {
		if(arr[i]==arr[i+1])
		{
			count++;
			for(int j=i+1;j<size;j++)
			{

					arr[j]=arr[j+1];
			}
		}

		cout<<arr[i]<<" ";
	 }

	return 0;
}
