#include<iostream>
using namespace std;
int main()
{
	int a[100],i,n,x,sum=0,aver=0,multi=1;
	cout<<"Enter the size of the array";
	cin>>n;
	cout<<"enter the array in the form of integer ";
	for(int i=0;i<n;i++)
	{cin>>a[i];}
	for(int i=0;i<n;i++)
	{
	sum=sum+a[i];}
	aver=sum/n;
		for(int i=0;i<n;i++)
	{multi= multi*a[i];}
	cout<<"the sum of the array element is "<<sum<<endl<<"  ";
	cout<<"the average of the array element is "<<aver<<endl<<"  ";
	cout<<"the multiplication of the array element is "<<multi<<"  ";
	return 0;
}