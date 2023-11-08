#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node*next;
		Node*prev;
		Node(int val)
		{
			data=val;
			next=NULL;
			prev=NULL;
		}
};



	int length(Node* head)
	{
		int l=0;
		Node*temp=head;
		while(temp!=NULL)
		{
			l++;
			temp=temp->next;
		}
		return l;
	}
	void Kappend(Node* &head, int k)
	{
      Node* newHead;
	  Node* newTail;
	  Node* tail=head;
	  int l=length(head);
	  k=k%l;
	  int count=1;
	  while(tail->next!=NULL)
	  {
	  	if(count==l-k)
	  	{
	  		newTail=tail;
		  }
		  if(count==l-k+1)
		  {
		  	newHead=tail;
		  }
		  tail=tail->next;
		  count++;
		  }	
		  newTail->next=NULL;
		  tail->next=head;
		  return newHead ;
		
	}
	 void display(Node* head)
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
	 
	 int arr[]={1,2,3,4,5,6,7};
	 
	 for(int i=0; i<7;i++)
	 {
		appendnode(head,arr[i]);
	                             }
	
	Node* newhead=Kappend(head,3);
	display(newHead);
	return 0;
}








