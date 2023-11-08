#include<iostream>
using namespace std;
int	printunion(int a[],int b[],int m,int n)
{ int i=0; int j=0;
while(i<m && j<n)
{
if(a[i]<b[j])
cout<<" "<<a[i++];
else if(a[i]>b[j])
cout<<" "<<b[j++];
else
{
	cout<<"  "<<a[i++];
	j++;
}
}
while(i<m)
cout<<" "<<a[i++];
while(j<n)
cout<<" "<<b[j++];
	
}
int printintersection(int a[],int b[],int m,int n)
{
	int i=0,j=0;
	while(i<m && j<n)
	{
		if(a[i]>b[j])
		j++;
		else if (a[i]<b[j])
		i++;
		else
		{
			cout<<a[i++]<<"   ";
			j++;
		}
	}
}
int main()
 {
 	int a[]={1,2,3,4,5,6};
 	int b[]={4,5,7,8,9,10};
 	int m=sizeof(a)/sizeof(a[0]);
 	int n=sizeof(b)/sizeof(b[0]);
	 cout<<" UNION OF THE ARRAY IS-> "; 
 	printunion(a,b,m,n);
 	cout<<endl;
 	cout<<"Intersection is -> ";
 	printintersection(a,b,m,n);
 	return 0;
 }