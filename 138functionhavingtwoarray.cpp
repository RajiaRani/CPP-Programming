#include<iostream>
using namespace std;
void display(const int *start, const int *end);
int main()
{
	int number[]={23,67,99,0,87};
	display(number,number+5);
	return 0;
}
void display ( const int * start, const int * end)
{
	const int * ptr;
	for(  ptr =start; ptr!=end;ptr++)
	{
		cout<<*ptr<<endl;
	}
}