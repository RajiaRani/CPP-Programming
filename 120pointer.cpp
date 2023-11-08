#include<iostream>
using namespace std;
int main()
{
	int x=90;
	bool girl=true;
	char input ='g';
	
	int*xptr;
	bool*girlptr;
	char*inputptr;
	
	xptr=&x;
	girlptr=&girl;
	inputptr=&input;
	
	cout<<x<<"-->"<<xptr<<endl;
	cout<<girl<<"-->"<<girlptr<<endl;
	cout<<input<<"-->"<<inputptr<<endl;
	return 0;
}