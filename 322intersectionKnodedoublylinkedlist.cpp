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
void appendnode(Node* &head, int val)
{
	Node*n=new Node(val);
	if(head==NULL)
	{
		head=n;
		return;
	}
	Node*temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=n;
	n->prev=temp;
	}


	void display(Node* head)
	{
		
		Node* temp= head;
		while(temp!=NULL)
		{
			cout<<temp->data<<" <--> ";
			temp=temp->next;
		}
		cout<<"NULL"<<endl;
		}

    int l1, l2 (Node*head1, Node* &head2)
		  
 {
	Node*temp=head1;
	Node* temp=head2;
	int l1=0;
	int l2=0;
	while(temp!=NULL)
	{
		temp=temp->next;
		l1++;
		l2++;
			  }
	return l1;
	return l2;
}
  void intersection(Node* &head1, Node* &head2)
  {
  	int l1=length(head1);
  	int l2=length(head2);
  	int d=0;
  	Node* ptr1;
  	Node* ptr2;
  	if(l1>l2)
  	{
  		d=l1-l2;
  		ptr1=head1;
  		ptr2=head2;
	  }
	  else
	  {
	  	d=l2-l1;
	  	ptr1=head2;
	  	ptr2=head1;
	  }
	  while(d)
{
	ptr1=ptr1->next;
	if(ptr1==NULL)
	{
		return -1;
	}
	d--;
}
 while(ptr1!=NULL && ptr2==NULL)
 {
 	if(ptr1==ptr2)
 	{
 		return ptr1->data;
	 }
	 ptr1=ptr1->next;
	 ptr2=ptr2->next;
 }
 return -1;
}
int main()
{
	Node* head=NULL;
	appendnode(head1, 1);
	appendnode(head1, 2);
	appendnode(head1, 3);
	appendnode(head1, 4);
	intersection(head1, head2, 3);
	display(head 1);
	display(head 2);
	cout<<intersection(head1, head2)<<endl;
	return 0;
	
	
		  }	  	
    
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	









