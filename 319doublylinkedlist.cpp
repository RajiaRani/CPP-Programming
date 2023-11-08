#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node*next;
		Node*prev;
		Node(int val)
		{data=val;
		next=NULL;
		prev=NULL;
		}
};
void insertatend(Node* &head, int val)
{
	Node*n=new Node(val);
	if(head==NULL)
	{
		head=n;
		return ;
	}
	Node*temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=n;
	n->prev=temp;
}
void insertathead(Node* &head, int val)
{
	Node*n=new Node(val);
	if(head==NULL)
	{
		head=n;
	}
	else{
		head->prev=n;
		n->next=head;
		head=n;
	}
	}
	void display(Node*head)
	{
		Node*temp=head;
		while(temp!=NULL)
		{
			cout<<temp->data<<" <--> ";
			temp=temp->next;
		}
		cout<<"NULL"<<endl;
	}
	int main()
	{ 
	Node*head=NULL;
	insertatend(head,1);
	insertatend(head,2);
	insertatend(head,3);
	insertatend(head,4);
	display(head);
	insertathead(head,12);
	display(head);
	return 0;
		
		
	}
	
	
	
	
	
	
	
	
	

















