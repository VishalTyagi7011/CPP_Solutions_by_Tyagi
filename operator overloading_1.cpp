//============================================================================
// Name        : operator.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class operatorss
{
public:
	int x,y;
	operatorss(int x, int y)
	{
		this->x=x;
		this->y=y;
	}
	void operator+(operatorss obj)
	{
     int a=obj.x;
     int b=obj.y;
      cout<<a*b;


	}
};

int main() {
 operatorss *obj=new operatorss(2,4);
 cout<<obj->x<<endl;
 cout<<obj->y<<endl;

 operatorss *objt=new operatorss(8,7);
 cout<<objt->x<<endl;
 cout<<objt->y<<endl;

 *obj+*objt;
cout<<endl;
 cout<<obj->x<<endl;
 cout<<obj->y<<endl;
 cout<<objt->x<<endl;
 cout<<objt->y<<endl;
	return 0;
}
