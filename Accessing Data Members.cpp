//============================================================================
// Name        : Accessing.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
 class Access_data_member
 {
 public:
	string name;
	int age;
	int phone;
 };

int main() {

 cout<<"size of classs "<<sizeof(Access_data_member)<<endl;
 Access_data_member obj;
 obj.name="vishal tyagis";
 obj.age=48;

 cout<<obj.age<<endl;
 cout<<obj.name<<endl;
	return 0;
}
