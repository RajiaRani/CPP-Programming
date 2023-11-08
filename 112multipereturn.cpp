#include<iostream>
using namespace std;
bool check(int age);
int main()
{



if (check(18))

cout<<"you are adult";
else
cout<<"you are kid";
return 0;
}
bool check(int age)
{
	if(age>=18)
	return true;
	else
	return false;
}