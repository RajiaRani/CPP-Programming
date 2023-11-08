#include<iostream>
using namespace std;
int main()
{
	int a[100],n,i,e=0,o=0;
	cout<<"Enter the size which you need ";
	cin>>n;
	cout<<"Enter the number ";
	for(int i=0;i<n;i++)
	{cin>>a[i];}
	for(int i=0;i<n;i++)
	{if(a[i]%2==0)
	e=e+a[i];
	else
	o=o+a[i];
	}
	
	{
	if(e==0)
	cout<<"EVEN NUMBER IS NOT FOUND"<<endl;
	else
	cout<<"SUM of the even number = "<<e<<endl;
	
	
	if(o==0)
	cout<<"ODD NUMBER IS NOT FOUND"<<endl;
	else
	cout<<"SUM of the odd number = "<<o;}
	cout<<endl;
	return 0;
	
	
}