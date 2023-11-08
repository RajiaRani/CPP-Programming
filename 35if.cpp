#include<iostream>
using namespace std;
int main()
{
	int std;
	cout<<"enter the std"<<endl;
	cin>>std;
	if(std>8 && std<=12)
	{
		cout<<" this std is allowed"<<endl;
		if(std==12 || std==10)
		cout<<" this is board class and treat them very srickly"<<endl;
	}
	else
	{
		cout<<"this class is not allowed"<<endl;
	}
	return 0;
}