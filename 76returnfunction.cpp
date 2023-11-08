#include<iostream>
using namespace std;
int screen(int,int,int);
int main()
{
	int result;
	result=screen(36,6,6);
	cout<<" the result value is ="<<result;
	return 0;
	
}
int screen(int a,int b, int c)
{
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	return a/(b+c);
	
}