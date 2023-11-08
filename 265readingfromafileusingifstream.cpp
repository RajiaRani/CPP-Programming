#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream file;
	file.open("chenchu.text");
	if(!file.is_open())
	{cout<<"error while opening the file ";
	}
	else
	{
		cout<<"reading from the file contents are "<<endl;
		string line;
		while (file.good()){
		
		getline(file,line);
		cout<<line<<endl;}
	}
	return 0;
}