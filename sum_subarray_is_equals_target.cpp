//============================================================================
// Name        : sum_subarray_is_equals_target.cpp
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
    int arr[]={1,2,3,4,3,26,7,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=10;
    int start=0,end=0;
    bool flag=false;
    for(int i=0;i<size;i++)
    {
        int summ=0;
        for(int j=i;j<size;j++)
        {
           summ=summ+arr[j];
           if(summ==target)
           {
               start=i;
               end=j;
               flag=true;
               break;
           }
        }
        if(flag)
        {
            break;
        }
    }
    for(int i=start;i<=end;i++)
    {
        cout<<arr[i]<<" ";
    }



    return 0;
}
