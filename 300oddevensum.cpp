#include<iostream>
using namespace std;
int main()
{
	int a[100], n,i,even=0,odd=0;
	cout<<"enter the size of the array ";
	cin>>n;
	cout<<"enter the array ";
	for(int i=0;i<n;i++)
	{cin>>a[i];}
	for(int i=0;i<n;i++)
	{
	if(a[i]%2 ==0)
	
	even=even+a[i];
	else
	odd=odd+a[i];}
	cout<<"1.Sum of the even is = "<<even<<endl;
	cout<<"2.Sum of the odd is = "<<odd;
	cout<<endl;
	return 0;
}