#include<iostream>
using namespace std;
int main()
{
	int a[10], i, n;
	cout<<"enter the size of the array ";
	cin>>n ;
	cout<<"enter the array ";
	for(int i=0; i<10; i++)
	{cin>>a[i];
	}
	cout<<"the original array is ";
		for(int i=0; i<10; i++)
		cout<<a[i]<<" ";
	cout<<"reverse array is ";
	for(int i=(10-1);i>=0;i--)
	cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}