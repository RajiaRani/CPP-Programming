#include<iostream>
using namespace std;
int main()
{
	int a[100], i,n,odd=0,even=0;
	cout<<"Enter the size of the array ";
	cin>>n;
	cout<<"Enter the array ";
	for(int i=0; i<n;i++)
	{cin>>a[i];}
	for(int i=0; i<n;i++)
	{
		if(a[i]%2==0)
		even++;
		else
		odd++;
	}
	cout<<"Total even numbers is = "<<even<<endl;
	cout<<"Total odd numbers is = "<<odd<<endl;
	return 0;
	
}