#include<iostream>
using namespace std;
class Human{
	public:
		static int human_count;
		
};
int Human :: human_count=0;
int main()
{
	cout<< Human :: human_count;
	return 0;
	
}