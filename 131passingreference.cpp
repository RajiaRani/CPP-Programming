#include<iostream>
using namespace std;
void screen(char *ptr);
int main()
{
	char ch = 'R=rajia' ;
	screen(& ch);
	return 0;
	
}
void screen(char *ptr)
{
	cout<<*ptr<<endl;
}