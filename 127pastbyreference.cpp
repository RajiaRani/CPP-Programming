#include<iostream>
using namespace std;
void display(int *ptr);
int main()
{
	int age=45;
	display(&age);
	return 0;
}
void display(int *ptr){
	cout<< *ptr<<endl;
}