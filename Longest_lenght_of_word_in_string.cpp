//============================================================================
// Name        : Longest_lenght_of_word_in_string.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================



#include <iostream>
#include<cstring>

 #include  <bits/stdc++.h>
using namespace std;

int main() {
	char arr[50];
	cout<<"enter the element";
	cin.getline(arr,50);
cin.ignore();
	int leng=strlen(arr);
    int maxx=0,count=0;
	for(int i=0;i<leng;i++)
	{
	    if(arr[i+1]==' ' or arr[i+1]=='\0')
	    {
        maxx=max(count,maxx);
	        count=0;
	    }
	    else
	    {
	        count++;
	    }
	}
	cout<<maxx;


	return 0;
}

