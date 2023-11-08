#include<iostream>
using namespace std;
int main()
{
	int date;
	cout<<"enter the date"<<endl;
	cin>>date;
	if(date>0)
	{
		if(date<31)
		{
			cout<<"entered the date is valid";
		}
	}
	return 0;
}