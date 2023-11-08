#include<iostream>
using namespace std;
int main()
{
	int a[100],i,n,last,first,x,average;
	cout<<"Enter the size of the array ";
	cin>>n;
	cout<<"enter the array -> ";
	for(int i=0;i<n;i++)
	{cin>>a[i];}
	cout<<"Enter the number of seaching element ";
	cin>>x;
	first=0;
	last=n-1;
	average=(first+last)/2;
	while (first<=last)
	{
		if(a[average]<x)
		first=average+1;
		else if(a[average]==x)
		{cout<<"The number "<<x<<"found at position "<<average+1;
		break;
		}
		else
		last=average-1;
		average=(first+last)/2;
	}
	if(last<first)
	cout<<"The number "<<x<<"is not in a given array ";
	cout<<endl;
	return 0;
}