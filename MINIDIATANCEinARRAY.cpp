#include<iostream>
using namespace std;
int minidist(int a[],int n,int x, int y)
{
	
	int min_dist=INT_MAX;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if((x==a[i] && y==a[j]) || ( y==a[i] && x==a[j]) && min_dist>abs(i-j) ) 
			{
			min_dist=abs(i-j);
		}
		}
	}
	return min_dist;
}

int main()
{
	int a[]={1,2,4,5,6,7,8,9,0,22};
	int n=sizeof(a)/sizeof(a[0]);
	int x=2, y=9;
	int m=minidist(a,n,x,y);
	cout<<m;
	return 0;
}