#include<iostream>
using namespace std;
class Node{ public:
	int data;
	Node* next;
	
	Node(int val)
	{
	data=val;
	next=NULL;
}
	};
	void insertatend(Node* &head,int val)
	{
		Node*n=new Node(val);
		if(head==NULL)
		{head=n;
		return;
		}
		else{
			Node*temp=head;
			while(temp->next!=NULL)
			{temp=temp->next;
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
			insertatend(head,7);
			insertatend(head,4);
			insertatend(head,8);
			insertatend(head,3);
			insertatend(head,17);
			display(head);
			Node* newhead=reverse(head);
			display(newhead);
			return 0;
				}
	
	
	
	
	
	
	
	