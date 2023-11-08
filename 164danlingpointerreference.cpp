#include<iostream>
using namespace std;
int main()
{
	int*pointer=nullptr;
	pointer=new int;
	if(pointer!=nullptr)
	{
		*pointer=100,*pointer=90,*pointer=89;
		cout<<*pointer<<endl;
		cout<<*pointer<<endl;
		cout<<*pointer<<endl;
		delete pointer;
		pointer=nullptr;
	}
	else
	{cout<<"memory not allocated";
	}
	return 0;
}