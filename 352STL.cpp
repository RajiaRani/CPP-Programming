#include<iostream>
#include<iterator>
#include<vector>
using namespace std;
int main()
{
	vector<int>arr={1,34,56,78,90,108,112,123,134};
	vector<int>::iterator ptr=arr.begin();
	vector<int>::iterator ftr=arr.end();
	// using next() to return new iterator 
	// ponts to 108
	auto it= next(ptr,5);
	//using prev() to return new iterator
	//points to 108
	auto it1=prev(ftr,5);
	cout<<"The position of new iterator using next() is "<<endl;
	cout<<*it<<" "<<endl;
		cout<<"The position of new iterator using prev() is "<<endl;
	cout<<*it1<<" "<<endl;
	return 0;
	
}