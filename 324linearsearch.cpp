#include<iostream>
using namespace std;
 void LinearSearch(int a[], int n)
 {
 	int temp=-1;
 	
 	for(int i=0; i<6 ;i++)
 	{
 		if(a[i]==n)
 		{
		 
 		cout<<"Element found at location is "<<output<<endl;
 		temp=0;
 		return;
 	}
	 }
	 
	 
	
	if (temp ==-1);
	 {
	 	cout<<"No element found "<<endl;
	 }
 }

int main()
{
	int arr[6]={12,45,67,89,0,1};
	cout<<"Enter the element to search "<<endl;
	int num;
	
	cin>>num;
	LinearSearch(arr, num);
	return 0;
	
}