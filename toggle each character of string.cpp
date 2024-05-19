//============================================================================
// Name        : toggle.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string>

using namespace std;

int main() {
	string str;
	cout<<"Enter the string :";//input->visHAlsTyagI,output->VIShaLStYAGi
	cin>>str;

	for(char ch:str)
	{
		if(islower(ch))
		{
			ch=toupper(ch);
		}
		else
		{
			ch=tolower(ch);
		}
		cout<<ch;
	}


	return 0;
}
