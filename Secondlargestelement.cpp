#include<iostream>
using namespace std;

void secondlargest(int arr[], int n)
{
	if(n<2)
	{
		cout<<"Invalid array";
		return;
	}
	
   int first,second=INT_MIN;
   for(int i=0;i<n;i++)
   {
   	
   	if(arr[i]>first)
   	{
   		second=first;
   		first=arr[i];
   		
	   }
	else if(arr[i]>second && arr[i]!=first)
	{
		second=arr[i];
	}
   }
   cout<<second<<" ";
}
int main()
{
	int arr[]={12,19,89,190,87,123};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"Second largest element is  = ";
	secondlargest(arr,n);
	return 0;
}