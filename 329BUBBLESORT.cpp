#include<iostream>
using namespace std;
void bubblesort(int arr[])
{
	for(int i=0; i<6;i++)
	{
		for(int j=0; j<(6-i-1); j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
int main()
{
	int narr[6];
	cout<<"Enter any 6 integers in any order "<<endl;
	for(int i=0; i<6;i++)
	{
		cin>>narr[i];
	}
	cout<<"BEFORE SORTING -> "<<endl;
	for(int i=0; i<6;i++)
	{
		cout<<narr[i]<<" "<<endl;
	}
	bubblesort(narr);
	cout<<" AFTER SORTING -> "<<endl;
	for(int i=0; i<6;i++)
	{
		cout<<narr[i]<<" "<<endl;
	}
	return 0;
	}