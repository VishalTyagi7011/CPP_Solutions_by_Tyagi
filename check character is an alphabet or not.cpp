//============================================================================
// Name        : check.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout<<"enter the character :";
	char character;
	cin>>character;
    if((character>='A' && character<='Z')|| (character>='a' && character<='z')){
    	cout<<"It is alphabet";
    }
    else
    {
    	cout<<"It is not alphabet";
    }
	return 0;
}
