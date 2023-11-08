#include<iostream>
using namespace std;
int main()
{
	int a[10], i ,element;
	cout<<"Enter the 8 array element ";
	for(int i=0; i<8 ;i++)
	cin>>a[i];
	cout<<"Enter the new element for the insertion ";
	cin>>element;
	a[i]=element;
	cout<<"Final array after the insertion ";
	for(int i=0; i<10;i++)
	cout<<a[i]<<"   ";
	return 0;
}
