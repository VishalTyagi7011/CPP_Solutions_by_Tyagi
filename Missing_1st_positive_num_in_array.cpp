//============================================================================
// Name        : Missing_1st_positive_num_in_array.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[]={0,-9,1,3,-4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int temp[size];
    for(int i=0;i<size;i++)
    {
        temp[arr[i]]=2;
    }
    int number;
    for(int i=1;i<size;i++)
    {
        if(temp[i]!=2)
        {
            number=i;
            break;
        }
    }

     cout<<number;



    return 0;
}
