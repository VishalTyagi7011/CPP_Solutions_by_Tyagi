//============================================================================
// Name        : duplicates_in_array.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// Online C++ compiler to run C++ program online
#include <iostream>
#include<set>
using namespace std;

int duplicate(int arr[],int size)
{
    set <int> array(arr,arr+size);
    for(int element:array)
    {int count=0;
      for(int i=0;i<size;i++)
      {
          if(element==arr[i])
          {
              count++;
          }
      }
      if(count>1)
      {
          cout<<element<<" ";
      }
    }
  return 0;
}

int main() {
    int array[]={1, 2, 3, 6, 3, 6, 1};
    int size=sizeof(array)/sizeof(array[0]);
    duplicate(array,size);
 return 0;
}
