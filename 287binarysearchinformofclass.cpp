#include<iostream>
using namespace std;
class bsearch
{public:
	int a[20],n,x,l,f,m;
	void getdata()
	{
		cout<<"enter the size of the array ";
		cin>>n;
		cout<<"enter the array-> ";
		for(int i=0;i<n;i++){
		cout<<"enter the element at position"<<i+1<<"of the array";
		cin>>a[i];}
		cout<<"enter that element which you want to find ";
		cin>>x;
	}
	void display()
	{
		f=0;
		l=n-1;
		m=(f+l)/2;
		if(x>a[m])
		f=m+1;
		else if(x<a[m])
		f=m-1;
		else
		{cout<<"element position is "<<x;
		}
	}
};
int main()
{ 
	bsearch ob;
	ob.getdata();
	ob.display();
	return 0;
}