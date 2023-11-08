#include<iostream>
using namespace std;
int printUnion(int a1[], int a2[], int x, int y)
{
	int i=0;
	int j=0;
	while( i<x && j<y)
	{
		if(a1[i]<a2[j])
		cout<<" "<<a1[i++];
		else if(a1[i]>a2[j])
		cout<<" "<<a2[j++];
		else
		{
			cout<<" "<<a1[i++];
			j++;
		}
	}
	while(i<x)
	cout<<" "<<a1[i++];
	while(j<y)
	cout<<" "<<a2[j++];
	cout<<endl;
}

//for the intersection 
int printIntersection(int a1[],int a2[], int x, int y)
{
	int i=0, j=0;
	while(i<x &&j<y)
	{
		if(a1[i]<a2[j])
		i++;
		else if (a1[i]>a2[j])
		j++;
		else
		{
			cout<<" "<<a1[i++];
			j++;
		}
	}
}
int main()
{
	int a1[]={ 2,3,4,5,6,8,9,12,15};
	int a2[]={5,6,7,8,10,11,13};
	int x= sizeof(a1)/sizeof (a1[0]);
	int y= sizeof (a2)/sizeof (a2[0]);
	cout<<" union of the two sorted array "<<endl;
	printUnion(a1, a2, x, y);
	cout<<" Intersection of the sorted array "<<endl;
	printIntersection(a1,a2,x,y);
	getchar();
	return 0;
	
}