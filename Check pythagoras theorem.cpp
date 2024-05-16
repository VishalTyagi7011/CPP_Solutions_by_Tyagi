//============================================================================
// Name        : Check.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// Online C++ compiler to run C++ program online
#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int a , b,c, maxx, min1, min2;
    a=5;b=4;c=3;
     if((a>b) and (a>c))
     {
         maxx=a;
     }
     else if(b>c)
     {
         maxx=b;
     }
     else
     {
         maxx=c;

     }

     if(maxx==a)
     {
         min1=b;
         min2=c;
     }
     else if(maxx==b)
     {
         min1=a;
         min2=c;
     }
     else
     {
         min1=a;
         min2=b;
     }


if(pow(min1,2)+pow(min2,2)==pow(maxx,2))
{
    cout<<"it is pythagoras theorm";
}
else
{
    cout<<"it is not";
}

    return 0;
}
