// Online C++ compiler to run C++ program online
#include <iostream>
#include<algorithm>
#include<set>
using namespace std;

int main() {
string str="neeraj";
set<char> val;
int maxx=0;
char che;
for(char ch:str)
{
    val.insert(ch);
}
for(char ch:val)
{
    int total=count(str.begin(),str.end(),ch);
    maxx=max(maxx,total);
    cout<<ch<<" is repeated :"<<total<<endl;

}
cout<<maxx;



    return 0;
}
