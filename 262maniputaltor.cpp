#include<iostream>
#include<iomanip>
using namespace std;
ostream &student(ostream &output)
{
	output<<" Name of the student -> ";
	return output ;
}
istream &student2(istream &input)
{
	cout<<"enter the name of the student please "<<endl;
	return input;
}
int main()
{
	string name;
	cin>>student2>>name;
	cout<<student<<name;
	return 0;
}