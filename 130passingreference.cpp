#include<iostream>
using namespace std;
void input(bool *ptr);
int main()

{
	bool human=true;
	input(&human);
	return 0;
}
void input(bool *ptr)
{
	cout<<*ptr<<endl;
	
}