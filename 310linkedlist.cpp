#include<iostream>
using namespace std;
class Node{ public:
	int data;
	Node*next;
	Node(int val){
		data=val;
		next=NULL;
	}
};
void InsertNodeAtEnd(Node* &head, int val)
{
	Node*n= new Node(val);
	if(head==NULL)
	{
		head=n;
		cout<<" node appended "<<endl;
		return;
		
	}
	else{
	
	Node*temp=head;
	while (temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=n;


}
}
void display(Node *head )
{
	Node*temp=head;
	while(temp!=NULL)
	{
	cout<<temp->data<<"--> ";
	temp=temp->next;
	}
	cout<<endl;
}
int main()
{
	Node *head=NULL;
	InsertNodeAtEnd(head,1);
	InsertNodeAtEnd(head,2);
	InsertNodeAtEnd(head,3);
	InsertNodeAtEnd(head,4);
	InsertNodeAtEnd(head,5);
	display(head);

	
}






















