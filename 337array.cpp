#include<iostream>
using namespace std;
int main(){
	int i;
	int a[]={12,2,7,8,90,43};
	int n=sizeof(a)/sizeof(a[0]);
	for(i=0;i<n;i++)
	 cout<<a[i]<<" ";
	 cout<<endl;
	 //FOR SUM
	 int sum=0;
	 	for(i=0;i<n;i++)
	 sum=sum+a[i];
	 cout<<"Sum of the array is="<<sum<<endl;
	 //FOR SUBSTRACTION
	 int sub=a[0];
		for(i=1;i<n;i++)
		sub=sub-a[i];
		cout<<"Substraction is="<<sub<<endl;
	//FOR MULTIPLICATION
	int multi=a[0];
		for(i=1;i<n;i++)
		multi=multi*a[i];
	cout<<"Multiplication is="<<multi<<endl;
	//FIND MAXIMUM NUMBER
	int reff=a[0];
		for(i=1;i<n;i++)
		reff=max(reff,a[i]);
		cout<<"Maximum number is="<<reff<<endl;
	//FIND MINIMUM
	int s=a[0];
	for(i=1;i<n;i++)
	s=min(s,a[i]);
	cout<<"Minimum number is="<<s;
	 return 0;
	
}
