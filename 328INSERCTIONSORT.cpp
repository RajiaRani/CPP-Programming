#include<iostream>
using namespace std;
void insertionsort(int arr[])
{
	int j=0;
	int key=0;
	for(int i=1; i<5;i++)
	{
		int key=arr[i];
		int j=i-1;
		while( j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
		
	}
}


int main()
{
	int narr[5];
	cout<<"Enter any 5 number in any order "<<endl;
	for(int i=0; i<5; i++)
	{
		cin>>narr[i];
	}
	cout<<"UNSORTED ARRAY -> "<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<narr[i]<<" "<<endl;
	}
	insertionsort(narr); 
	cout<<"SORTED ARRAY -> "<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<narr[i]<<" "<<endl;
	}
	return 0;
}