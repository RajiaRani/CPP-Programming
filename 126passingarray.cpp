#include<iostream>
using namespace std;
void display(int[],int);
int main()
{ 
     int number[]={23,78,56,34,23,45};
     int total=6;
     display(number,total);
	return 0;
}
void display(int number[],int total)
{
	for(int counter=0;counter<total;counter++){
		cout<<number[counter]<<endl;
	}
}