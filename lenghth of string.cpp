//============================================================================
// Name        : lenghth.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	string name;
	cout<<"Enter the name :";
	cin>>name;
	int leng=0;
	while(name[leng]!='\0')
	{
		leng++;
	}
  cout<<leng;
	return 0;
}
