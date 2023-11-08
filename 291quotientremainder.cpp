#include<iostream>
using namespace std;
int main()
{
	int num,dem,quotient,remainder;
	cout<<"Enter the num ";
	cin>>num;
		cout<<"Enter the dem ";
	cin>>dem;
	quotient=num/dem;
	remainder=num%dem;
	cout<<"QUOTIENT IS = "<<quotient<<endl;
	cout<<"REMAINDER IS = "<<remainder<<endl;
	return 0;
	
}