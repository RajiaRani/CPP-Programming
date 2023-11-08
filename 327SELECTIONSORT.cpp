#include<iostream>
using namespace std;
void selectionsort(int arr[])
{
	for(int i=0; i<9; i++)
	{
		int min=i;
		for(int j=i+1; j<10;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
			
		}
		if( min!=i)
		{
			int temp=arr[min];
			arr[min]=arr[i];
			arr[i]=temp;
		}
	}
}
int main()
{
	int newarr[10];
	cout<<" Enter any 10 integers in random order "<<endl;
	for(int i=0; i<10; i++)
	{
		cin>>newarr[i];
	}
	cout<<" UNSORTED ARRAY "<<endl;
	for(int i=0; i<10; i++)
	{
		cout<<newarr[i]<<" "<<endl;
	}
	selectionsort(newarr);
	cout<<"SORTED ARRAY -> "<<endl;
	for(int i=0; i<10; i++)
	{
		cout<<newarr[i]<<" "<<endl;
	}
	return 0;
	
}