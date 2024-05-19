//============================================================================
// Name        : Product.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int array_size;
	cout<<"Enter the size of array :";
	cin>>array_size;
	int arr[array_size];
	for(int i=0;i<array_size;i++)
	{
		cout<<"Enter the element: ";
		cin>>arr[i];

	}

	for(int i=0;i<array_size;i++)
	{
		int product=1;
      for(int j=0;j<array_size;j++)
      {
    	  if(i!=j)
    	  {
    		 product=product*arr[j];
    	  }
      }cout<<product<<" ";
	}


	return 0;
}
