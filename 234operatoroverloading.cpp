#include<iostream>
#include<string>
using namespace std;
class Total{private:
	int a;
	int b;
	int c;
	int d;
	public:
		Total(){a=0;
		b=0;
		c=0;
		d=0;
		}
		Total(int x,int y, int z, int q)
		{a=x;
		b=y;
		c=z;
		d=q;
		}
		void display(){cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl;
		}
		Total operator+(Total t)
		{
			Total temp;
			temp.a=a+t.a;
			temp.b=b+t.b;
				temp.c=c+t.c;
					temp.d=d+t.d;
					return temp;
			
		}
		Total operator-(Total t)
		{
			Total temp;
			temp.a=a-t.a;
			temp .b=b-t.b;
			temp.c=c-t.c;
			temp.d=d-t.d;
			return temp;
		}
	};
		int main()
		{
			Total t1(12,45,7,89), t2(34,56,9,44),t3(13,77,34,90);
			Total t4=t1+t2+t3;
			Total t5=t1-t2-t3;
			t4.display();
			t5.display();
            return 0;
		}
		
		
