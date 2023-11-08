#include<iostream>
using namespace std;
int main()
{
	int a[100], i,n,negative=0,positive=0,zero;
	cout<<"Enter the size of the array ";
	cin>>n;
	cout<<"Enter the array ";
	for(int i=0;i<n;i++)
	{cin>>a[i];}
	for(int i=0;i<n;i++)
	{if (a[i]>0)
	{
	positive++;}
	else if(a[i]==0)
{
		zero++;}
	else
{
	negative++;}
	}
	cout<<"Frequency of positive number = "<<positive<<endl;
	cout<<"Frequency of negative number = "<<negative<<endl;
	cout<<"Frequency of zero number = "<<zero<<endl;
	return 0;
	
}