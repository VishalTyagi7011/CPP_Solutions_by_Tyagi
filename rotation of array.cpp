//============================================================================
// Name        : rotation.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int arr[]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
    	int temp=arr[0];
    	for(int j=0;j<4;j++)
    	{
          arr[j]=arr[j+1];

    	}
    	arr[4]=temp;

        for(int element:arr)
        {
        	cout<<element<<" ";
        }
        cout<<endl;
    }

	return 0;
}
