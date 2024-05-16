//============================================================================
// Name        : Print_all_element_of_array_using_pointer.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int arr[]={1,2,3,7,4,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    int *aptr=arr;
    for(int i=0;i<size;i++)
    {
   cout<<*aptr<<" ";
   aptr++;
    }
	return 0;
}
