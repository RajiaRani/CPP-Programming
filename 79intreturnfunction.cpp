#include<iostream>
using namespace std;
int screen( int,int,int,int,int);
int main()
{
 int result;
 result= screen(4,8,90,78,34);
 cout<<"the value of the result is ="<<result;
 return 0;
}
int screen( int a,int b,int c,int d,int e)
{
	cout<<endl<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e<<endl;
	return (a+b)+(45*c)-(d+e);
}