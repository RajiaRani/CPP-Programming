#include<iostream>
using namespace std;
int main()
{
	bool boy= true;
	char input= 'B';
	int weight=87;
	
	bool*boyptr;
	char*inputptr;
	int*weightptr;
	
	boyptr=&boy;
	inputptr=&input;
	weightptr=&weight;
	
	cout<<boy<<"-->"<<boyptr<<endl;
	cout<<input<<"-->"<<inputptr<<endl;
	cout<<weight<<"-->"<<weightptr<<endl;
	return 0;
	

}