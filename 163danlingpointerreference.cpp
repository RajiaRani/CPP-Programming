#include<iostream>
using namespace std;
int main()
{
	int*pointer=nullptr;
	pointer=new int;
	if(pointer!=nullptr)
	{
		*pointer=100, *pointer=56;
		cout<<*pointer<<endl;
		cout<<*pointer<<endl;
		delete pointer;
}
else
{cout<<"memory not allocated";
}
return 0;
	
}