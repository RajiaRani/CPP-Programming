#include<iostream>
using namespace std;
 void shallsort(int arr[], int n)
{
	for(int gap=n/2; gap>0; gap/=2)
	{
		for(int j=gap; j<n; j+=1)
		{
			int temp=arr[j];
			  int i=0;
			
	for( i=j; (i>=gap) && (arr[i-gap]>temp); i-=gap)
	
	{
		arr[i]=arr[i-gap];
	}
	arr[i]=temp;
	}
	}
	}
int main()
{
	int n;
	cout<<" enter the size of the array "<<endl;
	cin>>n;
	int arr1[n];
	cout<<"Enter " <<n<<" integers in any order "<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>arr1[i];
	
	}
	cout<<"Before sorting "<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<arr1[i]<<"  ";
	}
	cout<<endl;
	shallsort(arr1,n);
	cout<<"After sorting ";
	for(int i=0; i<n; i++)
	{
		cout<<arr1[i]<<"  "<<endl;
	}
	cout<<endl;
	return 0;
	
	
}