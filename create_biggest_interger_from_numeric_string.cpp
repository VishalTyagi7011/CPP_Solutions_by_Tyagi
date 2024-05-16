//============================================================================
// Name        : create_biggest_interger_from_numeric_string.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// Online C++ compiler to run C++ program online
#include <iostream>
#include<algorithm>
using namespace std;

int main() {
string str="53214";
sort(str.begin(),str.end(),greater<int>());

int x=stoi(str);
cout<<x;

    return 0;
}
