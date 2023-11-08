#include<iostream>
using namespace std; 
int main()
{
	int *pointer=NULL;
	cout<<"how many items you are gonna enter "<<endl;
	int input;
	cin>>input;
	
	pointer= new int[input];
	int temp;
	for(int counter=0; counter<input;counter++)
	{
		cout<<"enter the itmes"<<counter+1;
		cin>>temp;

	
	*(pointer + counter)=temp;}
	

		cout<<"the items you have entered is"<<endl;
	for(int counter=0;counter<input;counter++)
	{
		cout<<counter+1<<"itmes is"<<*(pointer+counter)<<endl;
		
		
	}
	delete[]pointer;
	return 0;
	
	
}