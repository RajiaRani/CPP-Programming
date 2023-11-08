#include<iostream>
using namespace std;
int main()
{ int a[90], i,n,mini,smini;
cout<<"enter the size of the array = ";
cin>>n;
cout<<"Enter the array is = ";
for(int i=0;i<n;i++)
{cin>>a[i];}
mini=a[0];
for(int i=1;i<n;i++)
if(mini>a[i]){mini=a[i];}
smini=a[0];
if(smini>a[i]){if(mini!=a[i])
smini=a[i];}

cout<<"SECOND MINIMUM NUMBER IS = "<<smini;
cout<<endl;
return 0;




}