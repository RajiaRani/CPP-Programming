#include<iostream>
using namespace std;
int main()
{
	int*pointer=nullptr;
	pointer=new int;
	if(pointer!=nullptr)
	{ *pointer= 10;
	cout<<*pointer<<endl;
	delete pointer;
	}
	else 
	{cout<<"memory not allowed";
	}
	return 0;
}