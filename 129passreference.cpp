#include<iostream>
using namespace std;
void screen(int *ptr);
int main()
{
	int x=45;
	screen(&x);
	return 0;
}
void screen(int *ptr)
{
	cout<<*ptr<<endl;
}