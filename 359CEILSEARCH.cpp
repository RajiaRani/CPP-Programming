#include<iostream>
//#include<bits/stdc++.h>
using namespace std;
int ceilSearch(int a[],int x,int l,int r)
{
	if(x<=a[l])
	return l;
// lineraly search 	
	for(int i=l; i<r; i++)
	{
		if(x==a[i])
		return i;
		
	//i=l, i+1=r	
		if(a[i]<x && a[i+1]>=x)
		return i+1;
	}
	return -1;
	
}
int main()
{
	// array must be sorted.
	//int a[]={1,2,8,10,10,12,19};
	int a[]={3,4,9,10,15,30};
	int n=sizeof (a)/sizeof (a[0]);
	int x=5;
	int index=ceilSearch(a, x, 0, n-1);
	if(index == -1)
	cout<<" ceil of  "<<x <<"does not exist in array ";
	else
	cout<<" ceil of  " <<x <<" is "<< a[index];
	return 0;
}