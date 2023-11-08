#include<iostream>
using namespace std;
int factorial2(double n)
{
	if(n<=1)
{
		return 1;}
	else
	return (n*factorial2(n-1));
}
int main()
{
	double num;
	cout<<" enter any number which you want the factorial of that number "<<endl;
	cin>>num;
	int final=factorial2(num);
	cout<<" Factorial of the  number  from 1 to "<<num<<" are -> "<<final<<endl;
	return 0;
}