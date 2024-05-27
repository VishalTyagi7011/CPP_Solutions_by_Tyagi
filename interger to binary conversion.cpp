//============================================================================
// Name        : interger.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string>
using namespace std;

int main() {
	int arr[]={128,64,32,16,8,4,2,1};
	int number;
	bool flag =false;
	cout<<"enter the number :";
	cin>>number;
	for(int i=0;i<8;i++)
	{
      if(number>=arr[i])
      {
    	  cout<<"1";
    	  flag=true;
    	  number=number-arr[i];
      }
      else
          if(flag==true)
        	  cout<<"0";

	}
	return 0;
}
