#include<iostream>
using namespace std;
void show(int[],int);
int main()
{
	int number[]={23,89,78,56,45};
	int length=5;
	 show( number, length);
	 return 0;
}
void show(int number[], int length){
	for(int counter=0; counter<length; counter++){
		cout<<number[counter]<<endl;
	}
}