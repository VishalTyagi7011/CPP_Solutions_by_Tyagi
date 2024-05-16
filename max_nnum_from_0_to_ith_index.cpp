//============================================================================
// Name        : max_nnum_from_0_to_ith_index.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int arr[]={1,2,3,6,9,3,2};
	int size=sizeof(arr)/sizeof(arr[0]);
	int temp[size],maxx=0,i;
	for(i=0;i<size;i++)
	{
      maxx=max(arr[i],maxx);
    temp[i]=maxx;
    cout<<" "<<temp[i];
	}

	return 0;
}
