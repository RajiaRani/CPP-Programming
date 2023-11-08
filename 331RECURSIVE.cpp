#include<iostream>
using namespace std;
int sum(int n)
{
	if(n!=0)
	return (n+sum(n-1));
	else
	return n;
}
int main()
{
	int num;
	cout<<" enter the number which you want the sum of the natural number "<<endl;
	cin>>num;
	 int Total=sum(num);
	cout<<" sum of the numbers from 1 to "<<num<<" are "<<Total<<endl;
	return 0;
}