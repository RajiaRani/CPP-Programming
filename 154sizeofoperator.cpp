#include<iostream>
using namespace std;
struct student{ int rollno;
char sex;
};
int main()
{
	cout<<"int-->"<<sizeof(int)<<endl;
	cout<<" short int-->"<<sizeof(short int)<<endl;
	cout<<"char-->"<<sizeof(char)<<endl;
	cout<<"float-->"<<sizeof(float)<<endl;
	cout<<"struct student-->"<<sizeof(student)<<endl;
	return 0;
	
}