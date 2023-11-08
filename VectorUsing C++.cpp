#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>grade(0);
	grade.push_back(90);
	grade.push_back(8);
	grade.push_back(1);
	grade.push_back(100);
	grade.push_back(123);
	grade.push_back(67);
	//int mini=grade.at(0);
	int max=grade.at(0);
	for(auto i:grade)
	{
		if(max<i)
		{
			max=i;
		}
	}
	cout<<"The Largest grade is "<<max<<endl;
	return 0;
	
}