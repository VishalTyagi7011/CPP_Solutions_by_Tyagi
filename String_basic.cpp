//============================================================================
// Name        : String_basic.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	//------------------adding two string ----------
	string str1="visahl",str;
	string str2="tyagi";
	str=str1+str2+" G";
	cout<<str<<endl;
	//------------------adding two string by append() meehod-----
	string s1="vis";
	string s2="hal";
	s1.append(s2);
	cout<<s1<<endl;

	//-----------Access 2nd element in string s1---
	cout<<s1[2]<<endl;

	//string data  delete---------
	string strg="visal tyagi is berst";
	cout<<strg<<endl;
	strg.clear();
	cout<<strg<<endl;


	// comparing two string is equal or not
	string strg1, strg2;
	strg1="vishal";
	strg2="vishal";
	cout<<strg1.compare(strg2)<<endl;// if equal return 0, otherwise 1;


	// check string is empty or not, if string is empty return 1 otherwise return 0
	string strg3="string is empty or not";
	cout<<strg3<<endl;
	strg3.clear();
	cout<<strg3<<endl;
	cout<<strg3.empty()<<endl;

	//delete element single or multiple from string using erase(index,total_words) method
	string strg4="vishal tyagi";
	cout<<"delete element from position 4 to 6"<<endl;
	strg4.erase(4,3);
	cout<<strg4<<endl;//output-> vishtyagi


	// find any substring from a string using str.find("substring");
	 string strg5="vishal tyagi";
	 cout<<"check \"hal\" substring is available or not in strg5 "<<endl;
	 cout<<strg5.find("hal")<<endl;//return index


	 // insert a substring  in a string using inset(index,substring) method
	 string strg6="vis";
	 cout<<"insert \"hal\"at position 3"<<endl;
	 cout<<strg6.insert(3,"hal")<<endl;

	 // calculate the length of a string
	 string strg7="raviprakashtyagi";
	 cout<<"calculate the length of\"strg7\" string : ";
	 cout<<strg7.length()<<endl;


	 // copy substring of a string from a index by using substr(index,substring_lenght) method
	 string strg8=" Max is great team leader";
	 string strg9=strg8.substr(8,5);
	 cout<<strg9<<endl;


	 //conversion numeric string to interger
	 string strg01="1234";
	 int num=stoi(strg01);
	 cout<<"string after conversion into integer :"<<num<<endl;


	 //conversion integer to string
	 int number=9876;
	 string str_1= to_string(number);
	 cout<<str_1<<endl;


	 // sorting the string by using sort(str.begin(),str.end()) method
	 string str_2="edcba";
	 sort(str_2.begin(),str_2.end());
	 cout<<"\"str_2\" after sorting :"<<str_2<<endl;

	 // reverse the string
	 string str_3="lahsiv";
	 reverse(str_3.begin(),str_3.end());
     cout<<"\"str_3\" after reverse : "<<str_3<<endl;

     //converting whole string into uppler letter or lower letter

     string str_01="My name is VIShal";
     transform(str_01.begin(),str_01.end(),str_01.begin(),::toupper);
     cout<<str_01<<endl;
     string str_02="RAM IS GREAT";
     transform(str_02.begin(),str_02.end(),str_02.begin(),::tolower);
     cout<<str_02<<endl;




	return 0;
}
