//============================================================================
// Name        : Sort.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int arr[]={1,7,4,9,6,2,4,8,6,9,0,2,5};
	int size=sizeof(arr)/sizeof(arr[0]);
	sort(arr,arr+size,greater<int>());
	for(int i=0;i<size;i++)
		cout<<arr[i]<<" ";
	return 0;
}
