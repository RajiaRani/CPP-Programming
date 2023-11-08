#include <iostream>
using namespace std;
void determineareaRec();

int main()
{
	determineareaRec();
	return 0;
}
void determineareaRec()
{
	int l=0, b=0;
	cout<<"enter the any of value of l and b"<<endl;
	cin>>l>>b;
	cout<<" the area of the Rec is ="<<"l*b" <<"."<<endl;
}
