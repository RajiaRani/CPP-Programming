#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void LinearSearch(int arr[], int num)
{

	int temp=-1;
	for(int i=0;i<10;i++)
	{
		if(arr[i]==num)
		{
			cout<<"Element is found at index ="<<i<<endl;
			cout<<"Position of the element is = "<<i+1<<endl;
			temp=0;
			
		}
	}
	if(temp==-1)
	{
	 	cout<<"No Element Found"<<endl;
	}
}
int main()
{
	int arr[10];
	//int n=sizeof(arr[0])/sizeof(arr);
	cout<<"Enter the 10 number "<<endl;
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	int num;
	cout<<"Enter the number which you want to search"<<endl;
	cin>>num;
	LinearSearch(arr,num);
	return 0;
}