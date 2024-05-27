//============================================================================
// Name        : Frequency.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<set>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	string str="neerajsingh";
	int sized=str.length();
	int count1=0;
	set<char> strg(str.begin(),str.end());


	for(char ch:strg)
	{
		count1=count(str.begin(),str.end(),ch);
		cout<<ch<<" is :"<<count1<<endl;
	}

	return 0;
}
