#include<iostream>
using namespace std;
int main()
{
	int a[50],i,n,max,smax;
	cout<<"enter the size of the array ";
	cin>>n;
	cout<<"enter the array -> ";
	for(int i=0;i<n;i++)
	{cin>>a[i];}
	max=a[0];
	for(int i=0;i<n;i++){
		if(max<a[i])
		max=a[i];
	}
	smax=a[0];
	for(int i=0;i<n;i++){
		if(smax<a[i])
		{if(a[i]!=max)
		
		smax=a[i];}
	}
		
		cout<<"THE SECOND MAXIMUM ELEMENT IS -> "<<smax ;
		cout<<endl;
		return 0;
	
	
	
	
}