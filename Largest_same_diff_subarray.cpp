//============================================================================
// Name        : Largest_same_diff_subarray.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
// There is a array , in which we calculate the length of largest subarray in which differnce of contiguos element is same.
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
int arr[]={10,7,4,6,8,10,11};
int size=sizeof(arr)/sizeof(arr[0]);
int count=1,maxx=0;
int diff=arr[0]-arr[1];
for(int i=1;i<size-1;i++)
{
    if(diff==arr[i]-arr[i+1])
    {
        count++;
        maxx=max(count,maxx);

    }
    else
    {
        diff=arr[i]-arr[i+1];
    }

}
cout<<maxx;

    return 0;
}
