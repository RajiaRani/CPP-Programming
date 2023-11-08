#include<iostream>
using namespace std;
float display(float,float,float,float);
int main()
{ float result;
result= display( 34, 78.6,98.7,45.9);
cout<<" the result value is ="<<result;
return 0;
	
}
float display(float a, float b, float c,float d )
{
	cout<<endl<<a<<endl<<b<<endl<<c<<endl<<d<<endl;
	return (2*a)-(b*c)+d;
}