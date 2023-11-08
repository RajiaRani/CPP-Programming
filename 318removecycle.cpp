#include<iostream>
using namespace std;
class Node{public:
	int data;
	Node*next;
	Node(int key)
	{data=key;
	next=NULL;
	}
};
void insertatend(Node* &head, int key)
{
	Node*n=new Node(key);
	if(head==NULL)
	{
		head=n;
		return;
		
	}
	else
	{
		Node*ptr=head;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=n;
		
	}
	}
	void makecycle(Node* &head, int pos)
	{
		Node*temp=head;
		Node* startnode;
		int count=1;
		while(temp->next!=NULL)
{if(count==pos)
{startnode=temp;
}
temp=temp->next;
count++;
		}
		temp->next=startnode;		
		}
		
		void removecycle(Node* &head)
		{Node*slow=head;
		Node*fast=head;
		do
		{
			slow=slow->next;
			fast=fast->next->next;
			
		}
		while(slow!=fast);
		fast=head;
		while(slow->next!=fast->next)
		{slow=slow->next;
		fast=fast->next;
		}
		slow->next=NULL;
	}
	
	bool detectcycle(Node* &head)
	{Node*slow=head;
	Node*fast=head;
	while( fast!=NULL && fast->next!=NULL)
{ slow=slow->next;
fast=fast->next->next;
if(fast==slow)
{return true;
}
		}		
		
	return false;	
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
	 makecycle(head,3);
	 cout<<detectcycle(head)<<endl;
	 removecycle(head);
	 display(head);
	 return 0;
	}
	
	
	
	
	
	
	
	
	
	
	