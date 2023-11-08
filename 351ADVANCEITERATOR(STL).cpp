#include<iostream>
#include<iterator>
#include<vector>
using namespace std;
int main()
{
	vector<int>arr={2,7,9,56,78,89,90};
	vector<int>::iterator ptr=arr.begin();
	//using advance iterator to increment the position
	//point to 78
	advance(ptr,4);
	cout<<" The position of the iterator after the increment is "<<endl;
	cout<<*ptr<<"  ";
	return 0;
}