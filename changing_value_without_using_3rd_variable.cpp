//============================================================================
// Name        : changing_value_without_using_3rd_variable.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
using namespace std;

int main()
{
    int a=5;
    int *aptr;
    aptr=&a;
    *aptr=7;
    cout<<a;

    return 0;
}
