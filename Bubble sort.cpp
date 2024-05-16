//============================================================================
// Name        : Bubble.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int arr[]={12,45,23,51,19,8,5,54,1};
    int size=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<size-1;i++)
    {

        for(int j=0;j<size-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
               int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

        }


    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }



    return 0;
}
