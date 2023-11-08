#include<iostream>
#include<stdexcept>
using namespace std;
int main()
{ int a=90, b=0, c;
try{if(b==0)
throw runtime_error("divide by zero"); 
c=a/b;
cout<<c<<endl;

}
catch(runtime_error &error)
{cout<<"exception occoured "<<endl;
cout<<error.what();
	}	
return 0;
}