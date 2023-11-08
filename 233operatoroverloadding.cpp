#include<iostream>
#include<string>
using namespace std;
class Marks{private:
	int a;
	int b;
	public:
		Marks()
		{a=0;
		b=0;
		}
		Marks(int ia, int ib)
		{a=ia;
		b=ib;
		}
		void data()
		{cout<<a<<endl;
		cout<<b<<endl;
		}
		Marks operator +(Marks m)
		{
			Marks temp;
			temp.a=a+m.a;
			temp.b=b+m.b;
	 return temp;	}
};
int main()
{
	Marks m1(34,67),m2(56,89),m3(67,80);
	Marks m4=m1+m2+m3;
	m4.data();
	return 0;
}