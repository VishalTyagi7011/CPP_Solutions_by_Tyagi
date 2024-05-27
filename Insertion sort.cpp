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
	int arr[]={1,6,8,2,4,6,8,9,3};
	int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size-1;i++)
    {
    	if(arr[i]>arr[i+1])
    	{
    		for(int j=i+1;j>=0;j--)
    		{
    			if(arr[j]<arr[j-1])
    			{
    				int temp=arr[j];
    				arr[j]=arr[j-1];
    				arr[j-1]=temp;
    			}

    		}

    	}


    }
    for(int i=0;i<size;i++)
    {
    	cout<<arr[i]<<" ";
    }

	return 0;
}
