#include<iostream>
using namespace std;
int main()
{
	int  date;
	cout<<"enter the date"<<endl;
	cin>>date;
	if(date>=0 &&date<=31)
	{
		cout<<"the date is valid";
	}
	else
	{
		cout<<"the date is invalid";
	}
	return 0;
}