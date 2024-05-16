//============================================================================
// Name        : diamond.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
using namespace std;


int main() {
    // Write C++ code here
  int i,j;
  for(i=1;i<6;i++){
      for(j=1;j<6-i;j++)
      {
          cout<<"  ";
      }
     for(j=i;j>0;j--)
      {
          cout<<"*"<<" ";
      }
      for(j=2;j<=i;j++)
      {
          cout<<"*"<<" ";
      }
      cout<<endl;
  }
//   cout<<"-------------------"<<endl;
    for(i=1;i<5;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"  ";
        }
         for(j=1;j<=5-i;j++)
        {
            cout<<"* ";

        }
        for(j=4;j>i;j--)
        {
            cout<<"* ";
        }

        cout<<endl;
    }


    return 0;
}
