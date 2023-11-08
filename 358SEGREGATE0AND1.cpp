#include<iostream>
using namespace std;
int segaegate0and1(int a[], int n)
{
	int l=0;
	int r=n-1;
	while(l<r)
	{
		while(a[l]==0 && (l<r))
		l++;
		while(a[r]==1 && (l<r))
		r--;
		if(l<r)
		{
			a[l]=0;
			a[r]=1;
			l++;
			r--;
		}
	}
}
int main()
{
	int a[]={1,0,0,1,1,1,0,0,1,1};
	int n= sizeof(a)/sizeof (a[0]);
	segaegate0and1(a,n);
	cout<<" Array after segearation ";
	for(int i=0; i<10;i++)
	cout<<a[i]<<"  ";
	return 0;
}