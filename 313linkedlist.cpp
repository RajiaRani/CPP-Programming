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

    //insert at the head.
	
	void insertathead(Node* &head, int val)
		{
		 Node*n= new Node(val);
		 n->next=head;
		 head=n;	
		}
		
	//insert at the end.
	void insertattail(Node* &head, int val)
	{
		Node*n= new Node(val);
		if(head==NULL)
		{
			head=n;
			return;
		}
		Node*temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;}
			temp->next=n;
		}
	
	// searching
		bool search(Node* &head, int key)
		{
		Node*temp=head;
	while(temp!=NULL)
	{
		if(temp->data==key)
		{ return true;
		}
		temp=temp->next;
	}
	return false;
		
		}
		//delection after the next.
		
		void deletion(Node* &head, int val)
		{ 
			if(head==NULL)
			{return ;
			}
			Node*temp=head;
			while(temp->next->data!=val)
			{
				temp=temp->next;
			}
			Node* todelete=temp->next;
			temp->next=temp->next->next;
			delete todelete;
		}
		// delete from starting
		
		void deleteathead(Node* &head)
		{
			Node* todelete=head;
			head=head->next;
			delete todelete;
			
		}
		
		void screen(Node*head)
		{
			Node*temp=head;
			while(temp!=NULL)
			{cout<<temp->data<<" <--> ";
			temp=temp->next;}
			
			cout<<endl;
		}
		int main()
		{ Node*head=NULL;
		  insertattail(head,1);
		  insertattail(head,8);
	      insertattail(head,9);
	     insertattail(head,6);
	     screen(head);
	     insertathead(head,12);
	     screen(head);
	     deletion(head,8);
	     screen(head);
	     deleteathead(head);
	     screen(head);
	     cout<<search(head,1)<<endl;
	     screen(head);
	     return 0;
			
		}
		
		
		
		
		
		
		