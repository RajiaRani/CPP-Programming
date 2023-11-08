#include<iostream>
using namespace std;
int main()
{
	int a1[50],a2[50],merage[100],n1,n2,i,j;
	cout<<"enter the size of the 1st array ";
	cin>>n1;
	cout<<"enter the array ";
	for(int i=0;i<n1;i++)
	{cin>>a1[i];
	merage[i]=a1[i];
	}
	j=i;
		cout<<"enter the size of the 2nd array ";
	cin>>n2;
	cout<<"enter the array ";
	for(int i=0;i<n2;i++)
	{cin>>a2[i];
	merage[j]=a2[i];
	j++;
	}
	cout<<"new array after the margeing ";
		for(int i=0;i<j;i++)
	
		cout<<merage[i]<<"  ";
		
		cout<<endl;
		return 0;
		
	
	
}