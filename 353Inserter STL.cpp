#include<iostream>
#include<iterator>
#include<vector>
using namespace std;
int main()
{
	vector<int>arr={1,3,5,6,7,89,90,112,345,678,890};
	vector<int>arr1={91,92,94,95,98,97,99,100};// inserted new element after the mention position
    vector<int>::iterator ptr=arr.begin();
    //mention the position for insertion new elements using advace()
    advance(ptr,7);
    //copy arr1 into arr
    copy(arr1.begin(),arr1.end(),inserter(arr,ptr));
    cout<<" The new vector after inserting the elements is "<<endl;
    for(int x:arr)
    cout<<x<<"  "<<endl;
    return 0;
	
}