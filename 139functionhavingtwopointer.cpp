#include<iostream>
using namespace std;
void screen(const int *start, const int *end);
int main()
{ int counter[]={23,88,99,89,44,55,66,77,22,11,23,45,67,87};
screen( counter+4,counter+6);
return 0;
	
}
void screen(const int *start, const int *end)
{
	const int *ptr;
	for(ptr=start;ptr!=end;ptr++)
	{
		cout<<*ptr<<endl;
	}
}