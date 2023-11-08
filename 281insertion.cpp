#include<iostream>
using namespace std;
int main()
{
	int a[20], n, x,i, elem;
	cout<<"enter the size of the array ";
	cin>>n;
	cout<<"enter the array ";
	for(int i=0; i<n; i++)
	{cin>>a[i];
	}
	cout<<"enter the element ";
	cin>>elem;
	
	 cout<<"enter the position which you want to insert ";
	 cin>>x;
	 a[i]=x;
	 for(int i=n; x<=i; i--)
	 a[i]=a[i-1];
	 a[i]=elem;
	 n++;
	 cout<<"new array after the inesrtion ";
	 	for(int i=0; i<n; i++)
	 	cout<<a[i]<<"  ";
	 	return 0;
	 
}