//============================================================================
// Name        : multilevel.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*0000000000000000000000000000000000000000000000
					  CLASS A
					  	 |
					  CLASS B
					  	 |
					  CLASS C
					  	 |
					  CLASS D
//0000000000000000000000000000000000000000000000*/

#include <iostream>
using namespace std;
//-------------------------------------------------
class Tarachand
{
public:
	int son=2;
	int daughter=3;
	int account=54000;
	int tarafun()
	{
		cout<<"it is super class calling";
		return 0;
	}

};
//------------------------------------------------------------
class Satya:public Tarachand
{
public:
	string wife="manju";

	int satyafun()
	{
		cout<<"it is satya class calling";
		return 0;
	}
};
//-----------------------------------------------------------
class Sindhu:public Satya
{
public:
	string company="Honda";

	int sindhufun()
	{
		cout<<"it is sindhu class calling";
		return 0;
	}
};



int main() {
	Sindhu obj;
	cout<<"calling sindhufun() :"<<obj.sindhufun()<<endl;
	cout<<"accessing  satya class members :"<<obj.wife<<endl;
	cout<<"accessing tara class function :"<<obj.tarafun();


	return 0;
}
