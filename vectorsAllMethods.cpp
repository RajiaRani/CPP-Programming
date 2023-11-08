#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
//	v.clear();
//	cout<<"Vector size is = "<<v.size()<<endl;
	
	v.push_back(30);
	v.push_back(40);
	
	cout<<"Vector size is = "<<v.size()<<endl;
	for(int i=0;i<v.size();i++)
	cout<<"Elements index is = "<< i <<endl<<" Elemet is = "<<v[i]<<endl;
	return 0;
}