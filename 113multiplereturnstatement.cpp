#include<iostream>
using namespace std;
bool check (int x);
 int main()
{   if(check (34))
cout<<"the answer is right";
else
cout<<"the answer is wrong";
	return 0;
}
 bool check (int x)
{
	if(x>=34)
	return true;
	else
	return false;
}