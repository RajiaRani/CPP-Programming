#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream file("chenchu.text", ios::in|ios::out|ios::app);
	
	if(!file.is_open())
	{cout<<"error while opening the file ";
	}
	
	else
	{cout<<"file opened sucessfully "<<endl;
	cout<<"writing to the file "<<endl;
	file<<"i have done my master in chemistry"<<endl;
	}
	
	
	
	
return 0;	
}