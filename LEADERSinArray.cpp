#include<iostream>
using namespace std;
void printleaders(int a[],int size)
{
	for(int i=0;i<size;i++)
	{
		int j;
		for(j=i+1;j<size;j++)
		{
			if(a[i]<=a[j])
			break;
		}
		if(j==size)
		cout<<a[i]<<"  ";
	}
	
}
int main()
{
int a[]={23,56,12,8,9,34,88,90,54};
int n=sizeof(a)/sizeof(a[0]);
printleaders(a,n);
return 0;
}