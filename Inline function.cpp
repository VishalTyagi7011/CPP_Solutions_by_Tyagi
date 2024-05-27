//============================================================================
// Name        : Inline.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

inline void adde(int a, int b)
{
	int c=a+b;
	cout<<c<<" "<<endl;
}

int main() {
	adde(5,7);
	return 0;
}
