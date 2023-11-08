#include<iostream>
#include<vector>
using namespace std;
int maxPairwiseProduct(vector<int>v)
{
	int result=0;
	int n=v.size();
	for(int i=0; i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(v[i]*v[j]>0)
			{
				result=v[i]*v[j];
			}
		}
	}
	return result;
}
int main()
{
	int x;
	cin>>x;
	vector<int>v(x);
	for(int i=0;i<x;i++)
	{
		cin>>v[i];
	}
	int result=maxPairwiseProduct(v);
	cout<<result<<" ";
	return 0;
}