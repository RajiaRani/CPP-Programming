#include<iostream>
using namespace std;
int main()
{
	char input='A';
	switch(input)
	{
		case'A':
			{
				cout<<"excellent"<<endl;
				break;
				
			}
			case'B':{
				cout<<"very good"<<endl;
				break;
			}
			case'C':
				{
					cout<<"good"<<endl;
					break;
				}
				case'D':
					{
						cout<<"not bad"<<endl;
						break;
					}
					default:{
						cout<<"dont know the grade"<<endl;
						
					}
			
	}
	return 0 ;
}