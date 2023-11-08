#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void largest(int arr[],int n)
{
	sort(arr,arr+n);
	int check=0;
	int count=1;
	for(int i=1;i<=n;i++)
	{
		if(count<4)
		{
			if(check!=arr[n-i])
			{
				cout<<arr[n-i]<<" ";
				check=arr[n-i];
				count++;
			}
		}
		else
		break;
	}
}
int main()
{
int arr[]={12,-1,90,89,456,908};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<"The three lagrest numbers is "<<endl;
largest(arr,n);
return 0;
}