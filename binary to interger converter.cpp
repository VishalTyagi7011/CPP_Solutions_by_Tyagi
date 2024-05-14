//============================================================================
// Name        : binary.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// Online C++ compiler to run C++ program online
#include <iostream>
#include<math.h>
using namespace std;
string reverse(string str)
{
    int n=str.length();
    string str1="";
    for(int i=n-1;i>=0;i--)
    {
        str1=str1+str[i];
    }
    return str1;
}

int main() {
 string str="1001";
 string str2=reverse(str);


 int n=str2.length();
 int sum=0;
 for(int i=0;i<n;i++)
 {
  if(str2[i]=='1')
  {
      sum=sum+pow(2,i);
  }
 }

 cout<<sum;



    return 0;
}
