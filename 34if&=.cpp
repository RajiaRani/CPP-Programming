#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"enter the age"<<endl;
	cin>>age;
	if(age>=20 && age<30)
	{
		cout<<" you are required for this post"<<endl;
		if(age==22 || age==25)
		cout<<" and you are alredy selected for this post";
		
	}
	else
	{
		cout<<" you are not fulfill our requirement"<<endl;
	}
	
	
	
	
	return 0;
}