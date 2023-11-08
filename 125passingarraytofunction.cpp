#include<iostream>
using namespace std;
void screen(int[],int);
int main()
{
	int age[]={23,89,67,90,78,56};
	int weight=6;
	screen(age,weight);
	return 0;
	
}
void screen(int age[],int weight){
	for( int boy=0;boy<weight;boy++){
		cout<<age[boy]<<endl;
	}
}