#include<iostream>
using namespace std;
int main()
{
	int a[100],n,i,e[100],j=0;
	cout<<"enter the size";
	cin>>n;
	cout<<"enter the array "<<endl;
	for(int i=0;i<n;i++)
	{cin>>a[i];
	if(a[i]%2==0)
	{
		e[j]=a[i];
		j++;
		}
	}
	if(j==0)
	cout<<"even number doesnt found ";
	else if(j==1)
	cout<<"there is only one even number is found. that is "<<e[0];
	else 
	{
		cout<<"list of the even numbers ";
		for(int i=0;i<j;i++)
		cout<<e[i]<<" ";
		cout<<endl;
	}
		return 0;
}