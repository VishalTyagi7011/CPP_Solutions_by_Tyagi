//============================================================================
// Name        : Remove.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter the string: ";
    cin >> str;
    string result = "";
    for(char ch:str)
    {
    	if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
    	{
    		result+=ch;
    	}

    }
    cout<<result;
	return 0;
}
