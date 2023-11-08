#include<iostream>
using namespace std;
int ceilsearch(int a[],int x, int l, int r)
{
	if(a[l]>=x)
	return l;
	if(a[r]<x)
	return -1;
	//find mid point
	 
	int m=(l+r)/2;
	
	// check if m is equal to x.
	if(a[m]==x)
	return m;
	
	if( a[m]<x)
	{
		if((m+1)<=r && x<=a[m+1])
		return m+1;
		else
		return ceilsearch(a,x,m+1,r);
	}
	else
	//a[m]>x
	{
		if((m-1)>=l && a[m-1]>=x)
		return m-1;
		else
		return ceilsearch(a,x,m-1,l);
	}

}
int main()
{
	//int a[]={2,5,7,8,10,23,34,45,67,89};
	 int a[] = { 1, 2, 8, 10, 10, 12, 19 };
	int n= sizeof(a)/sizeof(a[0]);
	int x=20;
	int index=ceilsearch(a,x,0,n-1);
	if(index== -1)
	cout<<"Ceil of "<<x<<" doesnt exists ";
	else
	cout<<" Ceil of "<<x<<" is "<<a[index];
	return 0;
}