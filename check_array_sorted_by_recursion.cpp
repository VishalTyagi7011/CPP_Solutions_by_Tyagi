//============================================================================
// Name        : check_array_sorted_by_recursion.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

bool check_sorted_array(int arr[],int size)
{
    if(arr[size]<=1)
    {
        return true;
    }
    if(arr[size-1]<arr[size-2])
    {
        return false;
    }
    return check_sorted_array(arr,size-1);
}

int main() {

    int arr[]={1,3,7,9,23};
    int sizes=sizeof(arr)/sizeof(arr[0]);
    cout<<check_sorted_array(arr,sizes);


    return 0;
}
