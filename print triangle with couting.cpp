//============================================================================
// Name        : print.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int k=0;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<k<<" ";
			k++;
		}
		cout<<endl;
	}

	return 0;
}
