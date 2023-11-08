#include<iostream>
#include<string>
using namespace std;
class Marks{private:
	int mark;
	public:
		Marks(int m){mark=m;
		}
		void display(){cout<<"total marks is "<<mark<<endl;
		}
		void operator+=(int a)
		{mark= mark+a;}
		friend void operator-=(Marks &b, int redmark);
};
void operator-=(Marks &b, int redmark)
{ b.mark -=redmark;};
int main()
{Marks raj(90);
raj.display();
raj+=34;
raj.display();
raj-=34;
raj.display();
return 0;


}