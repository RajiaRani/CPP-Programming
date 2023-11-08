#include<iostream>
using namespace std;
int getmissnumber(int a[],int x)
{
	int sum;
	 sum=(x+1)*(x+2)/2;
	for(int i=0;i<x;i++)
	 sum=sum-a[i];
	return sum;
}
int main()
{
	int a[]={1,2,3,4,5,6,7,10};
	int n=sizeof(a)/sizeof(a[0]);
	int miss= getmissnumber(a,n);
	cout<<"Missng Number is ->"<<miss;
	return 0;
}