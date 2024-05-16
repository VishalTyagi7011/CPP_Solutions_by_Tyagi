//============================================================================
// Name        : total_subarray_of_array.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int arr[]={1,2,3,4};
	int size=sizeof(arr)/sizeof(arr[0]);

	for(int i=0;i<size;i++)
	{
	  for(int j=i;j<size;j++)
		{
          for(int k=i;k<=j;k++)
          {
        	  cout<<arr[k]<<" ";
          }
          cout<<endl;
		}

	}
	return 0;
}
