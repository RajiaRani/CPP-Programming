#include<iostream>
using namespace std;
void foursmallest(int arr[],int n)
{
	//base case
	if(n<4)
	{
		cout<<"invalid array";
		return;
	}
	int a,b,c,d=INT_MAX;
	for(int i=0;i<n;i++)
	{
		if(arr[i]<a)
		{
			d=c;
			c=b;
			b=a;
			a=arr[i];
		}
		else if(arr[i]<b && arr[i]!=a)
		{
			d=c;
			c=b;
			b=arr[i];
		}
		else if(arr[i]<c && arr[i]!=a && arr[i]!=b)
		{
			d=c;
			c=arr[i];
		}
		else if(arr[i]<d && arr[i]!=a && arr[i]!=b && arr[i]!=c)
		{
			d=arr[i];
		}
	}
	cout<<a<<" ";
	cout<<b<<" ";
	cout<<c<<" ";
	cout<<d<<" ";
}
int main()
{
		int arr[]={12,19,89,190,87,123};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"Four smallest element is  = ";
	foursmallest(arr,n);

	return 0;
}