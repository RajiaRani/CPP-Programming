#include<iostream>
#include<string>
using namespace std;
struct Grocery{ string name;
int price;
};
int main()
{
	Grocery g[2];
	cout<<"Enter the itmes name and price is "<<endl;
	
	for(int a=0;a<2;a++)
	{
		cout<<"Enter the itmes details "<<endl;
		cin>> g[a].name;
		cin>> g[a].price;
		
	}
	cout<<"DETAILS OF THE ITMES "<<endl;
	
	for(int a=0;a<2;a++)
	{
	cout<<"FINAL DETAILS OF THE ITMES "<<(a+1)<<endl;
	cout<<"Itme Name= "<<g[a].name<<endl;
		cout<<"Itme Price= "<<g[a].price<<endl;
	
	}
return 0;	
}