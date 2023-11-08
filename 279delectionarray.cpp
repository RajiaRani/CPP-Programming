#include<iostream>
using namespace std;
int main()
{
	int a[90], n=90,x,i, j ,count=0;
	cout<<"enter the aize of the array ";
	cin>>n;
	cout<<"enter the array ";
	for(int i=0; i<n; i++)
	{cin>>a[i];
	}
	cout<<"enter the deleting element ";
	cin>>x;
	for(int i=0; i<n; i++)
	{
	
	 if(a[i]==x)
{
	for(int j=i; j<(n-1); j++)
	{
	a[j]=a[j+1];}
	count ++;
	i--;
	n--;
}
	}
	if(count==0)
	
		{
		cout<<"enter element doesnt exists ";}
		else 
		{
		cout<<"element delete succesufully ";
		for(int i=0; i<n; i++)
		cout<<a[i]<<"  ";
		
	}
		return 0;
	}