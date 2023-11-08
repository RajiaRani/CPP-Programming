#include<iostream>
using namespace std;
int main()
{
	int a[100],i,n;
	cout<<"enter the total students ";
	cin>>n;
	cout<<"ener the students ";
	for(int i=0;i<n;i++)
	{cin>>a[i];}
	cout<<"list of the odd position students ";
		for(int i=0;i<n;i++)
		{
		if(a[i]%2!=0)
		cout<<a[i]<<endl;
		if(a[i+1]%2!=0)	
		cout<<"    "<<a[i]<<endl;}
		cout<<endl;
		return 0;

}