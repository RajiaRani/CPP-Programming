#include<iostream>
#include<string>
using namespace std;
class Father{public:
	int height;
	void askFather(){cout<<"I am your father ask me what you want "<<endl;
	}
};
class Mother{public:
	string skincolor;
	void askMother(){cout<<"I am your mother ask me what you want "<<endl;
	}
};
class Child: public Father, public Mother
{   public:
	void askParents()
	{
		cout<<"am asking my parents "<<endl;
	}
	void setcolorandheight(string c, int h)
	{skincolor=c;
	height=h;
	}
	

void display()
{
	cout<<"height is "<<height<<"color is "<<skincolor<<endl;
}
};
int main()
{
	Child rajia;
	rajia.setcolorandheight("black",7);
	rajia.display();
	return 0;
}
