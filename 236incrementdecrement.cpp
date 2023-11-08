#include<iostream>
#include<string>
using namespace std;
class Marks{private:
	int a;
	public:
		Marks(){a=0;}
		Marks(int ia){a=ia;}
		void data(){cout<<"total marks is "<<a<<endl;
		}
		void operator++()
		{a+=1;}
		friend void operator--(Marks &b); 
};
void operator--(Marks &b)
{b.a-=1;}
int main()
{
	Marks raj(90);
	raj.data();
	++raj;
	raj.data();
	--raj;
	raj.data();
	return 0;
}