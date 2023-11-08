#include<iostream>
using namespace std;
int main()
{
	int a[100], i,n,odd=0,even=0;
	cout<<"Enter the size of the array ";
	cin>>n;
	cout<<"Enter the array ";
	for(int i=0; i<n;i++)
	{cin>>a[i];}
	for(int i=0; i<n;i++)
	{if(a[i]%2==0)
	even++;
	else
	odd++;
	}
	cout<<endl;
	if(even>1)
	cout<<"There are  "<<even<<" even numbers ";
	else
	{if(even==1)
	cout<<"There is only one even "<<even<<"number present ";
	else
	cout<<"there is no even number present ";
	}
	cout<<endl;
	if(odd>1)
	cout<<"There is "<<odd<<" odd number present ";
	else
	{if(odd==1)
	cout<<"There is only one "<<odd<<" number present ";
	else
	cout<<"there is no odd number present ";
	}
	cout<<endl;
	return 0;}