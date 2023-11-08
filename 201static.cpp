#include<iostream>
using namespace std;
class Human{
	public:
		static int count;
	     Human() {
		 
		 count++;
		}
		
		void humantotal(){
			cout<<"there are "<< count <<" peoples in this programs "<<endl;
		}
		static void humancount()
		{
		cout<<"there are "<< count <<" peoples in this programs "<<endl;	
		}
};
int Human:: count= 0;
int main()
{
	cout<<Human::count<<endl;
	Human rajia;
	Human jia;			
	Human raja;
	Human raj;
	Human roma;
	Human laddi;	
    Human chenchu;
	Human reetu;
	Human::humancount();
		cout<<Human::count <<endl;
}