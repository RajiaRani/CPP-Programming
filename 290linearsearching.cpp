#include<iostream>
using namespace std;
int main()
{
	int y[30],i,n,x;
	cout<<"enter the size of the array = ";
	cin>>n;
	cout<<"enter the array -> "<<endl;
	for(int i=0;i<n;i++)
	{cin>>y[i];
	}
	cout<<"Enter the number which you want to search = ";
	cin>>x;
	for(int i=0;i<n;i++)
	{if(y[i]==x)
	
	{
	cout<<"The searched number is = "<<i;
	break;
	}
	}
	if(i==n)
	{cout<<"SORRY, Number not present in the index ";
	}
	return 0;
}