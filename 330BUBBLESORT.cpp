#include<iostream>
using namespace std;
void bubblesort(int a[])
{
	int round=0;
	for(int i=0; i<5;i++)
	{
		round++;
		for(int j=0; j<(5-i-1);j++)
		{
		if (a[j]>a[j+1])
		
		{
		int temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
	}
	}
	}
	cout<<" NO OF ROUNDS "<<round<<endl;

}
int main()
{
	int narr[5];
	int size;
	cout<<"Enter any 5 integers in random order "<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>narr[i];
	}
	cout<<"BEFORE THE ARRAY SORTING "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<narr[i]<<" "<<endl;
	}
	bubblesort(narr);
	cout<<"ARRAY AFTER THE SORTING "<<endl;
	for(int i=0; i<5;i++)
	{
		cout<<narr[i]<<" "<<endl;
	}
	return 0;
}













