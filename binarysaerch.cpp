#include<iostream>
using namespace std;
int BinarySearch(int arr[], int n, int key)
{
	int start=0;
	int end=n-1;
	int mid=(start+end)/2;
	while(start<=end)
	{
		if(arr[mid]==key)
		{
			return mid ;
		}
		if(arr[mid]<key)
		{
			start=mid+1;
		}
		else
		{
			end=mid-1;
		}
		mid=(start+end)/2;
	}
	return -1;
}
int main()
{
	int even[10]={2,4,6,8,10,12,14,16,18,20};
	int odd[10]={1,3,5,7,9,11,13,15,17,19};
	
	int index=BinarySearch(even,10,18);
	cout<<"index of the key=18 is "<<index<<endl;
	return 0;
	
}