#include<iostream>
using namespace std;
int main()
{
	int a[50],size, i, element,num, position;
	cout<<"Enter the size of the array ";
	cin>>size;
	cout<<"Enter the array ";
	for(int i=0; i<size; i++)
	{cin>>a[i];}
	cout<<"Enter the new element ";
	cin>>element;
	
	cout<<"Enter the position of the new element ";
	cin>>position;
	a[i]=position;
	for(i=size;i>=position;i--)
	a[i]=a[i-1];
	a[i]=element;
	size++;

	 cout<<"Final array after the insertion ";
	 	for(int i=0; i<size; i++)
	cout<<a[i]<<"  ";
	return 0;
	
}