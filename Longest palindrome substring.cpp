//============================================================================
// Name        : Longest.cpp
// Author      : Vishal Tyagi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
#include<algorithm>
using namespace std;

int main() {
string str="forgeeksskeegfor",temp1,temp2,temp3;
int maxx_len=1;
int size=str.length();
for(int i=0;i<size;i++)
{
    temp1+=str[i];

    for(int j=i+1;j<size;j++)
    {
            temp1+=str[j];
            temp3=temp1;
            reverse(temp3.begin(),temp3.end());

            if(temp3.compare(temp1)==0)
            {
                if(maxx_len<temp3.length())
                {
                    maxx_len=temp3.length();
                    temp2=temp3;
                }
            }

    }
    temp1="";
}
cout<<"maximum substring palindrome lenght :"<<maxx_len<<endl;
cout<<"maximum substring palindrome  :"<<temp2<<endl;

    return 0;
}
