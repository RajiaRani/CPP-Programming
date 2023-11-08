#include<iostream>
using namespace std;
class Node{public:
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
	
	if(head==NULL){
		head=n;
		return ;
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
 void insertathead(Node* &head, int val)
 { 
  Node*n= new Node(val);
   n->next=head;
   head=n;
   
   }
    
 bool search(Node* &head, int key)
 {
 	Node*temp= head;
 	while(temp!=NULL)
 	{   if(temp->data==key)
 	    {
 	    	return true;
		 }
		   temp=temp->next;
 		
	 }
	 return false;
 	}
 	void screen(Node* head)
 	{
 		Node*temp= head;
 		while(temp!=NULL)
 		{
 			cout<<temp->data<<"<-->" ;
 			
		 temp=temp->next;}
		 cout<<endl;
 		}
 		int main()
 		{
 			Node*head=NULL;
 			insertatend(head,2);
 			insertatend(head,4);
 			insertatend(head,6);
 			insertatend(head,7);
 			insertatend(head,9);
 			insertatend(head,2);
 			insertathead(head,12);
 			cout<< search (head,8)<<endl;
 			screen(head);
 			return 0;
 			
		 }
   		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		