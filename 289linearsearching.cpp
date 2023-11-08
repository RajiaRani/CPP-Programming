#include<iostream>
using namespace std;
int main()
{
	int a[100],i,n,x;
	cout<<"Enter the size of the array";
	cin>>n;
	cout<<"enter the array in the form of integer ";
	for(int i=0;i<n;i++)
	{cin>>a[i];}
	cout<<"Enter the number which you want to search in the array ";
	cin>>x;
	for(int i=0;i<n;i++)
	{
		if(a[i]==x){ 
		cout<<"Element found in the index "<<i;
		break;}
	}
		if(i==n)
		{cout<<"Element not present in the array ";
		}
		
		return 0;
		
	
}