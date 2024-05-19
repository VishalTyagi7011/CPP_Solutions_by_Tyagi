//============================================================================
// Name        : multilevel.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*0000000000000000000000000000000000000000000000
 *
 *
				      CLASS A
				   /     |     \
				  /      |      \
				 /	  	 |       \
		        /        |        \
		   CLASS B    CLASS C    CLASS D


//0000000000000000000000000000000000000000000000*/

#include <iostream>
using namespace std;
//-------------------------------------------------
class Tarachand
{
public:
	Tarachand()
	{
		cout<<"super calass constructor calling"<<endl;
	}
	int son=2;
	int daughter=3;
	int account=54000;
	int tarafun()
	{
		cout<<"it is super class calling"<<endl;
		return 0;
	}

};
//------------------------------------------------------------
class Satya
{
public:
 string wife="manju";
 Satya()
 {
	 cout<<"it is satya class calling"<<endl;
 }

	int satyafun()
	{
		cout<<"it is satya class calling";
		return 0;
	}
};
//-----------------------------------------------------------
class Sindhu:public Satya,public Tarachand
{
public:
	Sindhu(string company)
	{
		this->company=company;
	}
	string company;

	int sindhufun()
	{
		cout<<"it is sindhu class calling";
		return 0;
	}
};



int main() {
	Sindhu obj("tata");
	cout<<"company name: "<<obj.company<<endl;
	cout<<obj.account<<endl;
	cout<<obj.wife<<endl;




	return 0;
}
