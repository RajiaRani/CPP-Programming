#include<iostream>
using namespace std;
int binarysearch(int arr[], int left, int right, int x)
{
	while(left<=right)
	{
		int mid=left+(right-left)/2;
		if(arr[mid]==x)
		{
			return mid;
		}
		else if(arr[mid]<x)
		{
			left=mid+1;
		}
		else
		{
			right=mid-1;
		}
		
		
	}
	return -1;
}
int main()
{
	int num;
	int newarr[10];
	int output;
	cout<<" Enter 10 integer in ASCENDING order "<<endl;
	for(int i=0; i<10;i++)
	{
		cin>>newarr[i];
		
	}
	cout<<" Enter one number which you want to be search "<<endl;
	cin>>num;
	output= binarysearch(newarr, 0, 9, num);
	 if(output== -1)
	 {
	 	cout<<"NO match found "<<output<<endl;
	 }
	 else
	 {
	 	cout<<"match is found at position "<<output<<endl;
	 }
	
	return 0;
	
	
}