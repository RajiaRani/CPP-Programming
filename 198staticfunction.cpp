#include<iostream>
#include<string>
using namespace std;
void screen();
int main()
{
	screen();
	screen();
	screen();
	return 0;
}
void screen()
{
	static int counter=0;
	cout<<"display function is called "<<++counter<<"times"<<endl;
	
}