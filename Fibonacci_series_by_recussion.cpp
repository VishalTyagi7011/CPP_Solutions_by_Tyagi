//============================================================================
// Name        : Fibonacci_series_by_recussion.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
 int fibonaci(int num)
 {
     if(num==0 or num==1)
     {
         return num;
     }
     else
     {
         return fibonaci(num-1)+fibonaci(num-2);
     }
 }

int main() {
 int count=8;
  for(int i=0;i<count;i++)

  {
     cout<< fibonaci(i)<<" ";
  }

    return 0;
}
