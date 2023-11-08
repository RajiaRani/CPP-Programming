#include<iostream>
#include<stdexcept>
using namespace std;
int main()
{
	try{throw 24;
	}
	catch(...)
	{cout<<"my age is "<<endl;
	}
	return 0;
}