#include<iostream>
#include<exception>
using namespace std;
int main(){int a=34, b=0,
c;
try{if(b==0)
throw"divide by zero";
c=a/b;
cout<<c<<endl;
}
catch (const char *d)
{
cout<<"expection occured "<<d<<endl;}
return 0;
}
