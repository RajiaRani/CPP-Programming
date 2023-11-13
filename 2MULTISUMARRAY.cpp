#include<iostream>
using namespace std;
int main()
{
	int a[]={1,23,33,22,11,44};
	int n=sizeof(a)/sizeof(a[0]);
	int sum=0;
	for(int i=0;i<n;i++)
	sum=sum+a[i];
	cout<<sum<<"  "<<endl;
	int sub=-0;
	for(int i=0;i<n;i++)
	sub=sub-a[i];
	cout<<sub<<"  "<<endl;
	int multi=1;
	for(int i=0;i<n;i++)
	multi=multi*a[i];
	cout<<multi<<"  "<<endl;
	return 0;

}