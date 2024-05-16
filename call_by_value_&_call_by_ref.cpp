//============================================================================
// Name        : call_by_value_&_call_by_ref.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
//-------------------call by reference---------------------------
void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
//---------------------call by value----------------------------------
void swap_1(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main()
{
    int a=5,b=6;
    swap(&a,&b);//call by reference, value will be swap

    cout<<"a is"<<" :"<<a<<endl;
    cout<<"b is"<<" :"<<b<<endl;
    int c=1,d=2;
    swap_1(c,d);//call by value, value will not be swap
    cout<<"c is"<<" :"<<c<<endl;
    cout<<"d is"<<" :"<<d<<endl;


}

