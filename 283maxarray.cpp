#include<iostream>
using namespace std;
int main()
{
	int a[100], i,n,max,mini,b[100];
	cout<<"Enter the size of the array ";
	cin>>n;
	cout<<"Enter the array -> "<<endl;
	for(int i=0; i<n; i++)
	{cin>>a[i];}
	max=a[0];
	mini=a[0];
	for(int i=1; i<n; i++)
	{if(a[i]> max)
	max=a[i];
	}
	{if(a[i]<mini)
	mini=a[i];
	}
	cout<<"1. MAXIMUM ELEMENT IS -> "<<max<<endl;
    cout<<"2. MINIMUM ELEMENT IS -> "<<mini<<endl;
	return 0;
}