#include<iostream>
using namespace std;
void display(int[],int);
int main()
{
	int girls[]={14,18,19,20,24,26,29,30};
	 int total=8;
	display(girls,total);
	return 0;
	
}
void display(int counting [], int total)
{
	for(int girls=0;girls<total;girls++){
		cout<<counting [girls]<<endl;
	}
}