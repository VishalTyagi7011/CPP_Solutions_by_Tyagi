//============================================================================
// Name        : Min_&_Max_element_in.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


int main() {
	int size;

	cout<<"Enter the size of Array:";
	cin>>size;
	int Arr[size],minn, maxx,i;
	for(i=0;i<size;i++){
		cout<<"Enter the element :";
		cin>>Arr[i];
	}
	minn=Arr[0];
	maxx=Arr[0];
	for(i=1;i<size;i++)
	{

		minn=min(minn,Arr[i]);
		maxx=max(maxx,Arr[i]);
	}
	cout<<"Minimum element is :"<<minn<<endl;
	cout<<"maximum element is :"<<maxx<<endl;


	return 0;
}
