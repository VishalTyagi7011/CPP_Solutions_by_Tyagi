//============================================================================
// Name        : Binary.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<algorithm>
using namespace std;

int main() {
   int arr[]={1,4,8,9,5,2,0,6,23,98};

   int size=sizeof(arr)/sizeof(arr[0]);
   sort(arr,arr+size);
   //0,1,2,4,5,6,8,9,23,98
   int element=2 ,first_index=0,last_index=size-1;
   for(int i=first_index;i<last_index;i++)
   {
	     if(arr[(first_index + last_index)/2]==element)
	     {
	    	 cout<<"index is :"<<(first_index + last_index)/2;
	    	 break;
	     }
	     else
	     {
	         if(arr[(first_index + last_index)/2]>element)
	         {
	        	 last_index=(first_index + last_index)/2-1;
	         }

	         else
	    	 {
	        	 first_index=(first_index + last_index)/2+1;
	    	 }
	     }



   }

	return 0;
}
