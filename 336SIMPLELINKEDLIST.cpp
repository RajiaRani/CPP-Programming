#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* next;

};
void display(Node*n)
{
	while(n!=NULL)
	{
		cout<<n->data<<"   ";
		n=n->next;
	}
	
}
int main()
{
	Node* head=NULL;
	Node* second=NULL;
	Node* third=NULL;
	Node* fourth=NULL;
	Node* fivth=NULL;
	
	 head=new Node();
	 second=new Node();
	 third=new Node();
	 fourth=new Node();
	 fivth=new Node();
	 
	head->data=23;
	head->next=second;
		second->data=45;
	second->next=third;
		third->data=34;
	third->next=fourth;
		fourth->data=78;
	fourth->next=fivth;
		fivth->data=60;
	fivth->next=NULL;
	display(head );
	return 0;
	
	
	
}