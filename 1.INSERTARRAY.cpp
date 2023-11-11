#include<iostream>
using namespace std;
int main()
{
	int a[6],num,i;
	cout<<"Enter any 5 array number "<<endl;
	for(int i=0; i<5;i++)
	cin>>a[i];
	cout<<"Enter any number to insert"<<endl;
	cin>>num;
	a[5]=num;

	cout<<" The new array is "<<endl;
	for(int i=0;i<6;i++)
	
	cout<<a[i]<<"   "<<endl;
	return 0;
	
}