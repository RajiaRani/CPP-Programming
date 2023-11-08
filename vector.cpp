#include<iostream>
using namespace std;
int main()
{
	bool cond[5]={12,20,7,9,18};
	int n=sizeof(cond)/sizeof(cond[0]);
	for(int i=0;i<n;i++)
	{
		if(i%2==0)
		{
			cond[i]=true;
		}
		
	else
	{
		cond[i]=false;
	}
	}
	return 0;
	
}