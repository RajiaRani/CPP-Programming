#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int arr[5]={10,5,90,7,2};
	sort(arr,arr+5);
	for(int i=0;i<5;i++)
	cout<<arr[i]<<"   "<<endl;
	
    if (Binary-search(arr,arr+5,7))
    cout<<"enter number is present"<<endl;
    else
    cout<<"enter number is NOT present"<<endl;
    return 0;
}