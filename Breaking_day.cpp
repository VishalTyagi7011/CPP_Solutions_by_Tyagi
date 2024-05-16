//============================================================================
// Name        : Breaking_day.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


//There is a lady which has a coffee cafe, There is given data that how many people visited her cafe
// on each day.Calculate the total breaking day. Breaking day=people visited more from last day.
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
int arr[]={1,2,0,7,2,0,2,2};
int size=sizeof(arr)/sizeof(arr[0]);
int count=0,maxx=arr[0];

for(int i=1;i<size;i++)
{
    if((arr[i]>arr[i+1])&&arr[i]>maxx)
    {
        count++;
        maxx=max(arr[i],maxx);

    }


}
cout<<count;

    return 0;
}
