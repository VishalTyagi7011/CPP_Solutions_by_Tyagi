//============================================================================
// Name        : checked.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	string str,str1;
	cout<<"enter the string:";
	cin>>str;
	str1=str;
    reverse(str.begin(),str.end());

    if(str1.compare(str)==0)

    	cout<<"string is palindrrome";

    else
    	cout<<"not palindrome";



	return 0;
}
