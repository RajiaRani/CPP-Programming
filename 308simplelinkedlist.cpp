#include<iostream>
using namespace std;
class Node{ public:
	int data;
	Node*next;
	
	
};
int main()
{
	Node*head;
	Node* one=NULL;
	Node* two=NULL;
	Node* three=NULL;
	Node* four=NULL;
	
	one= new Node();
	two=new Node();
	three=new Node();
	four=new Node();
	
	one->data=12;
	two->data=2;
	three->data=34;
	four->data=4;
	
	one->next=two;
	two->next=three;
	three->next=four;
	four->next=NULL;
	
	head=one;
	while(head!=NULL)
	{
	cout<<head->data<<endl; ;
	head=head->next;}
	return 0;
	
	
	
	
	
	
	
	
	
	
}