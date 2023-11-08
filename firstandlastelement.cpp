#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int selectionSort(int arr[] ,int n)
{
	for(int i=0;i<n;i++) //outer for loop
	{
		//mini index liya hai
		int mini=i;
		for(int j=i+1;j<n;j++) // inner loop hai
		{
				if(arr[mini]>arr[j])
				{
					mini=j;
				}
				
	 if(mini!=i)
	 {
	 	int temp=arr[mini];
	 	arr[mini]=arr[i];
	 	arr[i]=temp;
	 }
	}
	}
}
int FirstOcurr(int arr[],int n,int key)
{
	int s=0;
	int e=n-1;
	int mid=s+(e-s)/2;
	int ans=-1;
	while(s<=e)
	{
		if(arr[mid]==key)
		{
			ans=mid;
			e=mid-1;
		}
		else if(arr[mid]<key)
		     {
		     	s=mid+1;
			 }
			 else if(key<arr[mid])
			  	{
			  e=mid-1;
		            }
		mid=s+(e-s)/2;
	}

	return ans;
}
int LastOcurr(int arr[], int n, int key)
{
	int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
	while(s<=e)
	{
		//int mid=s+(e-s)/2;
		if(arr[mid]==key)
		{
			ans=mid;
			s=mid+1;
			}
	else if(arr[mid]<key)
		     {
		     	s=mid+1;
			 }
		else if(key<arr[mid])
			  
			  {
			  e=mid-1;	
	        }
	    mid=s+(e-s)/2;
	 }
	return ans;
}
int main()
{
	//int arr[10]={1,2,3,3,3,3,4,5,6,7};
	int arr[10] , key;
    cout<<" enter the 10 elements in random order"<<endl;
    for(int i=0;i<10;i++)
    {
    	cin>>arr[i];
	}
	selectionSort(arr,10);
	cout<<"Sorted Numbers are"<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
   cout<<"First occurrence at 3 element is = "<<FirstOcurr(arr,10,3)<<endl;
   cout<<"last occurrence at 3 element is = "<<LastOcurr(arr,10,3)<<endl;
	
	return 0;
}