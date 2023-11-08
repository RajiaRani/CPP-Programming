#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
	int a=340;
	cout<<"hex value = "<<" "<<hex<<a<<endl;
	cout<<"oct value = "<<" "<<oct<<a<<endl;
	cout<<"dec value ="<<" "<<dec<<a<<endl;
	cout<<"setbase value = "<<" "<<setbase(12)<<a<<endl;
	return 0;
	
}