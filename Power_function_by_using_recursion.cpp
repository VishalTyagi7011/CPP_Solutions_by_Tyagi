//============================================================================
// Name        : Power_function_by_using_recursion.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
using namespace std;

int power_fun(int num, int times)
{
    if(times==0)
    {
        return 1;
    }
    times--;
    return num * power_fun(num,times--);
}


int main() {
    cout<<power_fun(4,3);


    return 0;
}
