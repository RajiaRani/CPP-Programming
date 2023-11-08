#include<iostream>
#include<string>
using namespace std;
class Standard{private:
	
	int mark;
	public:
		Standard( int m){
		mark=m;
		}
		void data(){
		cout<<"Marks of the student is "<<mark<<endl;
		}
		Standard *operator->()
		{return this;}
};
int main()
{

	Standard raj(90);
	
	raj->data();
	return 0 ;
	
	
}