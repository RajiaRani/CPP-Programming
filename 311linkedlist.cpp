#include<iostream>
using namespace std;
class Node{ public:
int data;
Node*next;

Node(int val)
{ 
data=val;
next=NULL;
}
};
void insertathead(Node* &head, int val)
{
Node*n=new Node(val);
n->next=head;
head=n;
	}

	void insertatend(Node* &head, int val)
	{ 
	Node*n=new Node(val);
	if(head==NULL)
	{ head=n;
	return;
		}
		Node*temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
			}	
			temp->next=n;
		
	}
	bool search(Node* &head, int key)
	{
		
		Node*temp=head;
		while(temp!=NULL)
		{
			if(temp->data==key)
			{
				return true;
				
			}
			temp=temp->next;
			
		}
		return false;
	}
	void display(Node*head)
	{
		Node*temp=head;
		while(temp!=NULL)
		{
			cout<<temp->data<<"--> ";
			temp=temp->next;
		}
	}
	
	int main()
	{ 
	Node*head=NULL;
	insertatend(head,2);
	insertatend(head,3);
	insertatend(head,6);
	insertatend(head,8);
	insertathead(head,9);
	cout<<search(head,6)<<endl;
	display(head);
	return 0;
		
		
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	