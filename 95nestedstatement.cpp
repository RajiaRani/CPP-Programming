#include<iostream>
using namespace std;
int main()
{
	int counter;
	for(counter=90; counter<=1000; counter++)
	{ 
	int innercounter;
	for(innercounter=90;innercounter<=200;innercounter++)
	{
		cout<<innercounter<<endl;
		if(innercounter==178)
		break;
	}
}
return 0;
}