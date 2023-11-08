//#include<iostream>
#include <bits/stdc++.h>
//#include<stdlib.h>
//#include<limits.h>
using namespace std;
int findMinDiff(int a[], int n)
{
	  sort (a,a+n);
    int	d=INT_MAX;
	for(int i=0;i<n-1;i++)
	{
		if(a[i+1]-a[i]<d)
		d=a[i+1]-a[i];
	}
	return d;
}
int main()
{
	int a[]={2,4,34,18,19,8,67,8};
	int n=sizeof (a)/sizeof (a[0]);
	cout<<" Minimum Difference between any two elements is "<<"  "<< findMinDiff(a,n);
	return 0;
}