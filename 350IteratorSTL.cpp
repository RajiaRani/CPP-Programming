#include<iostream>
#include<iterator>
#include<vector>
using namespace std;
int main()
{
	vector<int>arr={1,2,3,4,5,6,77,89,90};
	vector<int>:: iterator ptr;
	cout<<" the vector elements are "<<endl;
	for(ptr=arr.begin();ptr<arr.end();ptr++)
	cout<<*ptr<<"   "<<endl;
	return 0;
}