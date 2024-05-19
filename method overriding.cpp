//============================================================================
// Name        : method.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class father
{
public:
 void earning()
 {
	 cout<<"father is earning";
 }
};
class son:public father
{
public:
	void earning()
	{
		cout<<"son is earning";
	}
};
int main() {
	son obj;
	obj.earning();
	return 0;
}
