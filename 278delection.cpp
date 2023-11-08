#include<iostream>
using namespace std;
int main()
{
	int a[20],n, i , pos;
	cout<<"enter the size of the array ";
	cin>>n;
	cout<<"enter the array ";
	for( int i=0; i<n; i++)
	{cin>>a[i];
	}
	cout<<"enter the position of the element which you want to delete ";
	cin>>pos;
	
	for(int i=pos; i<n; i++)
	{a[i]=a[i-1];
	}
	n=n-1;
	cout<<" ";
	for( int i=0; i<n; i++)
	{cout<<a[i]<<"  ";
	}
	
	return 0;
	
	
	
}