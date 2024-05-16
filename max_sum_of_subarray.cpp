//============================================================================
// Name        : max_sum_of_subarray.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {



	int arr[]={-1,4,7,2};
	int size=sizeof(arr)/sizeof(arr[0]);
	int maxx=0;

	for(int i=0;i<size;i++)
	{
	  for(int j=i;j<size;j++)
		{
		  int summ=0;
          for(int k=i;k<=j;k++)
          {
        	  summ=summ+arr[k];

        	  maxx=max(summ,maxx);
          }

		}

	}
	cout<<maxx;
	return 0;
}
