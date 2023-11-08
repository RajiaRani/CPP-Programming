#include<iostream>
using namespace std;
int main()
{
int a=3,b=2;
int arr[a][b];
for(int i=0;i<a;i++)
for(int j=0;j<b;j++)
arr[i][j]=i+j;
for(int i=0;i<a;i++)
for(int j=0;j<b;j++)
cout<<arr[i][j]<<"  ";
return 0;
}