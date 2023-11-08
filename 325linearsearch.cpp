#include<iostream>
using namespace std;
void LinearSearch(int a[], int n)
{
	int temp=+1;
	for(int i=0; i<10; i++)
	{
		if(a[i]==n)
		{
			cout<<" element found at the position is "<<i<<endl;
			temp=0;
			return;
		}
	}
	if(temp==+1)
	{
		cout<<"NO POSITION FOUND "<<endl;
	}
}



int main()
{
	int arr[10];
	cout<<"Enter the  10 elements of the array "<<endl;
	for(int i=0; i<10; i++ )
	{
		cin>>arr[i];
	}
	cout<<" Please enter element which you want to search "<<endl;
	int num;
	cin>>num;
	LinearSearch(arr, num);
	return 0;
}