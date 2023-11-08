#include<iostream>
using namespace std;
class Marks{private:
	int a;
	public:
		Marks(){a=0;}
		Marks(int ia){a=ia;}
		void data()
		{
			cout<<"your marks is "<<a<<endl;}
			Marks operator ++(int)
			{ Marks duplicate(*this);
			a+=1;
			return duplicate;}
		friend	Marks operator --(Marks&,int);
			};
			Marks operator--(Marks&b, int)
			{Marks duplicate(b);
			b.a-=1;
			return duplicate;
			}
			int main()
			{Marks raj(67);
			raj.data();
			(raj++);
			raj.data();
			(raj--);
			raj.data();
			return 0;
			
			}