#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node*next;
		Node*prev;
		Node(int k)
		{
			data=k;
			next=NULL;
			prev=NULL;
		}
};
void AppendNode(Node* &head, int k)
{
	Node*n=new Node(k);
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

void PrependNode(Node* &head, int k)
{
	Node*n=new Node(k);
	if(head==NULL)
	{
		head=n;
		return ;
	}
	else
	{
		head->prev=n;
		n->next=head;
		head=n;
	}
	}
	
	 void deleteathead(Node* &head, int k)
	 {
	 	Node* todelete=head;
	 	head=head->next;
	 	head->prev=NULL;
	 	delete todelete;
	 }
	 void deletion(Node* &head, int pos)
	 {
	 	if(pos==1)
	 	{
	 		delete head;
	 		return;
		 }
		 Node*temp=head;
		 int count=1;
		 while(temp!=NULL && count!=pos)
		 {
		 	temp=temp->next;
		 	count++;
		 }
		 temp->prev->next=temp->next;
		 if(temp->next!=NULL)
		 {
		 	temp->next->prev=temp->prev;
		 }
		 delete temp;
		 }
		 void display(Node*head)
		 {
		 	Node*temp=head;
		 	while(temp!=NULL)
		 	{
		 		cout<<temp->data<<"<--> ";
		 		temp=temp->next;
			 }
			 cout<<"NULL"<<endl;
		 }
		 
		 int main()
	{ 
	Node*head=NULL;
	AppendNode(head,1);
	AppendNode(head,2);
	AppendNode(head,3);
	AppendNode(head,4);
	display(head);
	PrependNode(head,12);
	display(head);
	deleteathead(head,1);
	display(head);
	deletion(head,2);
	display(head);
	
	return 0;
		
		
	}
	
		 
		 
		 
		 
		 
		 
		 
		 
		 
		 
		 
		 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 














