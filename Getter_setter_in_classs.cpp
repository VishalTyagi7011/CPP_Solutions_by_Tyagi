//============================================================================
// Name        : Getter_setter_in_classs.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Student
{
	string name;
	int age;
public:// In this case, name & age is private, whereas sex is public
	char sex;

   string getname()
   {
	   return name;
   }
   int getage()
   {
	   return age;
   }
   string setname(string NAME)
   {
	   name=NAME;
	   return name;
   }
   int setage(int num)
   {
	   age=num;
	   return age;
   }

};

int main() {
	Student obj;
	cout<<obj.setname("vishal");
	cout<<obj.setage(23);

	cout<<"name is:"<<obj.getname()<<endl;
	cout<<"age is :"<<obj.getage()<<endl;
	return 0;
}
