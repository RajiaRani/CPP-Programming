#include<iostream>
using namespace std;
int main()
{
	int*pointer=NULL;
	cout<<"enter  the student"<<endl;
	int age;
	cin>>age;
	pointer=new int[age];
	int temp;
	for(int counter=0;counter<age;counter++)
	
	{cout<<"enter the age "<<counter+1;
	cin>>temp;
	*(pointer+counter)=temp;
	}
	cout<<"the age of the students you have entered"<<endl;
	for(int counter=0;counter<age;counter++)
	{cout<<counter+1<<"student age is"<<*(pointer+counter)<<endl;
	}
	delete[]pointer;
	return 0;
}