#include<iostream>
using namespace std;
int main()
{
	int a[100],i,n;
	cout<<"enter the size";
	cin>>n;
	cout<<"enter the array ";
	for(int i=0;i<n;i++)
	{cin>>a[i];
	}
	cout<<"list of the ODD elements -> ";
		for(int i=0;i<n;i++)
	{
	if(a[i]%2!=0)
	cout<<a[i]<<" ";}
	cout<<endl;
	return 0;
}