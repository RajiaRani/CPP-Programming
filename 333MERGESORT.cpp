#include<iostream>
using namespace std;
int  Merge(int arr[],int l, int r, int m)
{
	int i=l; //left side of the array
	int j=m+1; //left side of the array
	int k=l; //temp
	int temp[5];
	 
	 while (i<=m && j<=r)
	 
	 	{
		 if ( arr[i]<=arr[j])
	 	{
	 		temp[k]=arr[i];
	 		i++;
	 		k++;
	 		
		 }
		 else
		 {
		 	temp[k]=arr[j];
		j++;
		k++;
		
		 }
	}
		 
	 
	 while(i<=m)
	 {
	 	temp[k]=arr[i];
	 	i++;
	 	k++;
	 }
	 while(j<=r)
	 {
	 	temp[k]=arr[j];
	 	j++;
	 	k++;
	 }
	 for(int c=l; c<r; c++)
	 {
	 	arr[c]=temp[c];
	 }

}
void mergesort(int arr[], int l, int r)
{
	if(l<r)
	{
		int m=(r+l)/2;
		mergesort(arr,l,m);  // left of the array 
		mergesort(arr,m+1,r); //right of the array
		Merge(arr, l, m,r);
		
	}
}
int main()
{
	int narr[5];
	cout<<" enter any five number you want "<<endl;
	for(int i=0; i<5;i++)
	{
		cin>>narr[i];
	}
	cout<<" BEFORE SORTING "<<endl;
	for(int i=0; i<5;i++)
	{
		cout<<narr[i]<<endl;
	}
	cout<<" AFTER SORTING "<<endl;
	mergesort(narr, 0,4);
	Merge(narr,0,4,2);
	for(int i=0; i<5;i++)
	{
		cout<<narr[i]<<"  "<<endl;
		
	}
	return 0;
}