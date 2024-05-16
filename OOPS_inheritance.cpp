//============================================================================
// Name        : OOPS_inheritance.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class gender
{

	public:
	string name;
	int age;
	int height=10;

  string setname(string name)
  {
	  this->name=name;
	  return name;

  }

};
class Male:private gender
{
public:
//	void male_func()
//	{
//		cout<<"this class is inheriting from super class"<<endl;
//	}
//	int setage(int age)
//	{
//		this->age=age;
//		return 0;
//	}
//	int setheight(int height)
//	{
//		this->height=height;
//		return 0;
//	}
//	int getage()
//	{
//		return age;
//	}
	int getheight()
	{
		return height;
	}
};

int main() {
	Male obj;
//    obj.setage(22);
//    obj.setheight(168);
//    		cout<<"age is :"<<obj.getage()<<endl;
//    		cout<<"height is :"<<obj.getheight()<<endl;
	cout<<obj.getheight()<<endl;

	return 0;
}
