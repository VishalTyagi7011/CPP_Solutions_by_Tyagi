//============================================================================
// Name        : sum.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	string str="1234";
    int summ=0;
    		for(char ch:str)
    		{
    			summ+=ch-'0';
    			cout<<summ<<endl;
    		}
    cout<<summ;
	return 0;
}
