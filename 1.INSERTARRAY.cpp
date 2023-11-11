#include<iostream>
using namespace std;
int main()
{
	int arr[6];
	int num,i;
	cout<<"Enter any 5 array number "<<endl;
	for(int i=0; i<5;i++)
	{
		cin>>arr[i];
	}

	cout<<"Enter any number to insert"<<endl;
	cin>>num;
	//add the new number to the last of the array
	arr[5]=num;

	cout<<" The new array is "<<endl;
	for(int i=0;i<6;i++)
     {
	  cout<<arr[i]<<"   "<<endl;
	 }
	return 0;

	// updated the file
}