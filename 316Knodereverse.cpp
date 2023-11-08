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
	}
	
	Node* reverseK(Node* &head, int k)
	{
		Node*prevptr=NULL;
		Node*currptr=head;
		Node*nextptr;
		
		int count=0;
		while(currptr!=NULL && count<k)
		{
			nextptr=currptr->next;
		    currptr->next=prevptr;
		
	    	prevptr=currptr;
		    currptr=nextptr;
		    count++;
			
		}
		if(nextptr!=NULL)
		{
			head->next=reverseK(nextptr,k);
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
			insertatend(head,1);
			insertatend(head,2);
			insertatend(head,3);
			insertatend(head,4);
			insertatend(head,5);
			insertatend(head,6);
			insertatend(head,7);
			insertatend(head,9);
			display(head);
			int k=5;
			Node*newhead=reverseK(head,k);
			display(newhead);
			return 0;
		}