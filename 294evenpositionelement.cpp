#include<iostream>
using namespace std;
int main()
{ int a[500], i,n,x;
cout<<"enter the size of the array = ";
cin>>n;
cout<<"Enter the array is = ";
for(int i=0;i<n;i++)
{cin>>a[i];}
cout<<"List of the EVEN elements ";
for(int i=0;i<n;i++)
{if(a[i]%2==0)
cout<<a[i]<<" ";
}
cout<<endl;
return 0;}
