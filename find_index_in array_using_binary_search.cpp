//============================================================================
// Name        : find_index_in.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//============================================================================
// Name        : Min_&_Max_element_in.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int binary_search(int arr[],int size,int element)
{
     int start_point=0;
    int end_point=size;
    int mid;
    while(start_point<=end_point)
    {
        mid=(start_point+end_point)/2;
        if(element==arr[mid])
        {
            return mid;
        }
        else if(element<arr[mid])
        {
            end_point=mid-1;

        }
        else if(element>arr[mid])
        {

            start_point=mid;
        }
    }
    return -1;
}


int main() {

int arr[]={1,2,3,4,5,6,7,8,9};
int arr_length=sizeof(arr)/sizeof(arr[0]);
int element=9;
cout<<binary_search(arr,arr_length,element);


	return 0;
}

