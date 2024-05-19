//============================================================================
// Name        : largest.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int size;
	cout<<"Enter the size of array :";
	cin>>size;
	int array[size];
	for(int i=0;i<size;i++)
	{
		cout<<"Enter the element: ";
		cin>>array[i];
	}
	sort(array,array+size);
	cout<<"minimmum element is :"<<array[0]<<endl;
	cout<<"maximum element is :"<<array[size-1];




	return 0;
}
