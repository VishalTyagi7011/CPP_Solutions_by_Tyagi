//============================================================================
// Name        : function.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class papa
{
public:
	virtual  void pant()
	 {
		 cout<<"papa class  is calling"<<endl;
	 }
	 void shirt()
	 {
		 cout<<"papa class is calling"<<endl;
	 }
};
class child :public papa
{
public:
	 void pant()
	 {
		 cout<<"child class  is calling"<<endl;
	 }
	 void shirt()
	 {
		 cout<<"child class is calling"<<endl;
	 }
};



int main() {

	papa *objt;
	child obj;
	objt=&obj;
	objt->pant();
	objt->shirt();

	return 0;
}
