#include<iostream>
#include<stdexcept>
using namespace std;
int main()
{try
{throw char ('m');}
catch(int a){cout<<a<<endl;}
catch(char *sex ){cout<<sex<<endl;}
catch(runtime_error d){cout<<d.what()<<endl;}
return 0;
}