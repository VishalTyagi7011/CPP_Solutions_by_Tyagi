#include <algorithm>
#include<string>
#include <iostream>
#include<vector>

using namespace std;




int main() {

   string s1="1101";
   string s2="100";
   string output="";
   int carry=0;
   int len1=s1.length();
   int len2=s2.length();
   if(len1>len2)
   {
       s2.insert(0,len1-len2,'0');
   }
   else
   {
       s1.insert(0,len2-len1,'0');
   }

    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());



    for(int i=0;i<=s1.length();i++)
    {

        if(s1[i]=='1' and s2[i]=='1' and carry==0)
        {
            output=output+'0';
            carry=1;

        }
        else if(s1[i]=='1' and s2[i]=='1' and carry==1)
        {
            output=output+'1';carry=1;

        }
        else if(s1[i]=='0' and s2[i]=='1' and carry==0)
        {
            output=output+'1';
        }
        else if(s1[i]=='0' and s2[i]=='1' and carry==1)
        {
            output=output+'0';
            carry=1;
        }
        else if(s1[i]=='1' and s2[i]=='0' and carry==0)
        {
            output=output+'1';
        }
        else if(s1[i]=='1' and s2[i]=='0' and carry==1)
        {
            output=output+'0';carry=1;
        }
        else if(s1[i]=='0' and s2[i]=='0' and carry==1)
        {
            output=output+'1';carry=0;
        }
        else if(s1[i]=='0' and s2[i]=='0' and carry==0)
        {
            output=output+'0';
        }
        else if(s1[i]=='\0' and s2[i]=='\0' and carry==1)
        {
            output=output+'1';
        }

    }
    reverse(output.begin(),output.end());

 cout<<output<<endl;


    return 0;
}
