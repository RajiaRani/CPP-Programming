#include<iostream>
using namespace std;
class Node{ 
  public:
	int data;
	Node*next;
	Node(int val)
	{
		data=val;
		next=NULL;
	}
};


void insertatend(Node* &head, int val)
{
  Node*n=new Node(val);
  if(head==NULL)
{ head=n;
 return;
}
else

{ 
Node*temp=head;
while(temp->next!=NULL)
{
	temp=temp->next;
}
temp->next=n;
	
}
}
Node*reverse(Node* &head)
		{
		
			Node*prevptr=NULL;
			Node*currptr=head;
			Node*nextptr;
			while(currptr!=NULL)
			{ 
			nextptr=currptr->next;
			currptr->next=prevptr;
			
			prevptr=currptr;
			currptr=nextptr;
		}
		return prevptr;
		}

	Node*reverseRecursive(Node* &head)
	{
		if(head==NULL || head->next==NULL)
		{
			return head;
		}
	{ 
		Node*newhead=reverseRecursive(head->next);
		head->next->next=head;
		head->next=NULL;
		return newhead;
	}
}
	

	void screen(Node*head)
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
		insertatend(head,2);
		insertatend(head,4);
		insertatend(head,6);
		insertatend(head,8);
		insertatend(head,10);
		insertatend(head,12);
		screen(head);
		Node*newhead=reverseRecursive(head);
		screen(newhead);
		return 0;
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	