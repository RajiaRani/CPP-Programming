#include<iostream>
using namespace std;
int main()
{
	int a[30], n, i, Temp, b[30]; 
	cout<<"Enter the total students size ";
	cin>>n;
	cout<<"Enter the students rollno -> ";
	for(int i=0; i<n; i++)
	{cin>>a[i];}
	for(int i=0; i<n; i++)
	{for(int j=i; j<n; j++)
	if(a[i]>a[j+1])
	{ Temp=a[i];
	a[i]=a[j+1];
	a[j+1]=Temp;
	}
	}
	
	cout<<"Aeeceding order of the enter rollno is ";
	for(int i=1; i<=n; i++)
	cout<<a[i]<<"   ";
	
	return 0;
}