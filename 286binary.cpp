#include<iostream>
using namespace std;
int main()
{
	int a[100],n,i,f,l,m,x;
	cout<<"Enter the strength of the students ";
	cin>>n;
	cout<<"Enter the strength ";
	for(int i=0;i<n;i++)
	{cin>>a[i];}
	cout<<"Enter the number which you want to search the student ";
	cin>>x;
	f=0;
	l=n-1;
	m=(f+l)/2;
	while(f<=l)
	{if(a[m]<x)
	f=m+1;
	else if(a[m]==x)
	{cout<<"The number "<<x<<" found at the position "<<m+1;
	break;
	}
	else
	l=m-1;
		m=(f+l)/2;
		cout<<"The number "<<x<<"is not in a given array ";
		cout<<endl;
		return 0;
	}
}