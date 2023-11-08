#include<iostream>
using namespace std;
int BinarySearch(int arr[],int start, int end, int x)
{
	while(start<=end)
	{
		int mid=(start+end)/2;
		
		if(arr[mid]==x)
		return mid;
		
		else if(arr[mid]<x)
		{
			start=mid+1;
		}
		else
		end=mid-1;
	}
	return -1;
}
int main()
{
	int arr[10];
	int num;
	int x;
	int output;
	cout<<"Enter the 10 elements in ascending order "<<endl;
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the element which you want to search"<<endl;
	cin>>x;
	
	 output=BinarySearch(arr,0,9,x);
	
	if(output==-1)
	{
		cout<<"Not found"<<endl;
	}
	else
	{
		cout<<"Element found at index "<<output<<endl;
	}
	return 0;
}