//============================================================================
// Name        : check.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	string str1="abcd",str2="dcba";

	// ===========================1st approach====================================

	int size=str1.size();
	bool flag=false;
	for(int i=0;i<size;i++)
	{
	 if(str2.find(str1[i])>size)
	 {
		 flag=true;
	     break;
	 }

	}
	if(flag)
		cout<<"it is not anagram"<<endl;
	else
		cout<<"it is anagram strig"<<endl;


	//================================2nd approach============================================
	sort(str1.begin(),str1.end());
	sort(str2.begin(),str2.end());

	if(str1.compare(str2)==0)
		cout<<"this is anagram string";
	else
		cout<<"this is not anagram string";
	return 0;
}
