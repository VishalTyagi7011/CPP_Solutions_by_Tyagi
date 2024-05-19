//============================================================================
// Name        : Prefix.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int arr[]={10, 20, 10, 5, 15};
	int size=sizeof(arr)/sizeof(arr[0]);

	for(int i=0;i<size;i++)
	{
		int Xor=0;
		for(int j=0;j<=i;j++)
		{
			Xor=Xor^arr[j];
		}
		cout<<Xor<<" ";
	}
	return 0;
}
