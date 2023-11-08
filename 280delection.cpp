#include<iostream>
using namespace std;
int main()
{
	int a[100], n,x, i,j,count=0;
	cout<<"Enter the size of the elements ";
	cin>>n;
	cout<<"Enter the array ";
	for(int i=0; i<n;i++)
	{cin>>a[i];}
	cout<<"Enter the element which you want to delete ";
	cin>>x;
	for(int i=0; i<n; i++)
{
		if(a[i]==x)
	{for (int j=i; j<n-1; j++)
	
	a[j]=a[j+1];
	count++;
	i--;
	n--;
	
	}
}
	if(count==0)
	
		cout<<"Enter the postion of the element is doesnt exist ";
		else 
	
		cout<<"Element delection successfully ";
			
			{
			cout<<"Final array after the delection is ";
			for(int i=0; i<n;i++)
			cout<<a[i]<<"   ";}
			
	

	return 0;
}