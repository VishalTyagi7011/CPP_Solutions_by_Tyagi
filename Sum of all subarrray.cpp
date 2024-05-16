//============================================================================
// Name        : Sum.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
int arr[]={1,2,3,4,5,6};
int size=sizeof(arr)/sizeof(arr[0]);
int summ,i;
for(i=0;i<size;i++)
{

	for(int j=i;j<size;j++)
	{
    summ=summ+arr[j];
	}
}
	return 0;
}
