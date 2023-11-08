#include<iostream>
using namespace std;
int main()
{
	int x=5, y=7;
	int a[x][y];
	for(int i=0;i<x;i++)
	for(int j=0;j<y;j++)
	a[i][j]=i+j;
	for(int i=0;i<x;i++)
	for(int j=0;j<y;j++)
	cout<<a[i][j]<<"  ";
	return 0;
}