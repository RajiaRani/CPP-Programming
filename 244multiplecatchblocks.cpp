#include<iostream>
#include<stdexcept>
using namespace std;
int main()
{
	try{
		throw runtime_error ("my husband name is mr. chenchu reddy he is very nice person.");
	}
	catch (const char *s){cout<<s<<endl;}
	catch(int a){cout<<a<<endl;}
	catch(runtime_error e){cout<<e.what()<<endl;}
	return 0;
}