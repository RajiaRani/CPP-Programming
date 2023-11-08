#include<iostream>
using namespace std;
class twostack{
	public:
	int* a;
	int size;
	int top1,top2;

  twostack(int n)
  {
  	size=n;
  	top1= -1;
  	top2= n;
  }
  void push1(int x)
  {
  	if(top1<top2-1)
  	{
  		top1++;
  		a[top1]=x;
	  }
	  else
	  {
	  	cout<<" stack is overflow ";
	  	exit(1);
	  }
  }
  void push2(int x)
  {
  	if(top1<top2-1)
  	{
  		top2--;
  		a[top2]=x;
	  }
	  else
	  {
	  	cout<<" stack is overflow ";
	  	exit(1);
	  }
  }
  int pop1()
  {
  	if(top1>=0)
  	{
  	
  		int x=a[top1];
  			top1--;
  		return x;
	  }
	  else
	  {
	  	cout<<" stack is underflow ";
	  	exit(1);
	  }
  }
  int pop2()
  {
  	if(top2<size)
  	{
  		
  		int x= a[top2];
  		top2++;
  		return x;
	  }
	  else
	  {
	  	cout<<" stack is underflow ";
	  	exit(1);
	  }
  }
};
int main()
{
	twostack s(5);
	s.push1(5);
	s.push2(10);
	s.push2(15);
	s.push1(11);
	s.push2(7);
	cout<<" popped the element from stack 1 is "<<"  "<<s.pop1()<<endl;
	s.push2(40);
		cout<<" popped the element from stack 2 is "<<"  "<<s.pop2()<<endl;
		return 0;
}

