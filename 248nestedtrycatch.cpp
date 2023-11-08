#include<iostream>
#include<stdexcept>
using namespace std;
int main()
{
	try{try{throw (" total male students is ");}
	catch(const char sex){cout<<"male character is "<<sex<<endl;}
	}
	catch(const char *e){cout<<"character type in outerblock->"<<e<<endl;}
	catch(...){cout<<"character type in innerblock->"<<endl;}
	return 0;
}