#include<iostream>
using namespace std;
int main()
{
	int a[50],size,i, element;
	cout<<"Enter the size of the array ";
	cin>>size;
	cout<<"Enter the array ";
	for(int i=0; i<size; i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the new element which you want to insert ";
	cin>>element;
	a[i]=element;
	cout<<"New Aarry after the insertion ";
	for(int i=0; i<size+1 ; i++)
	cout<<a[i]<<"  ";
	return 0;
	
	
}