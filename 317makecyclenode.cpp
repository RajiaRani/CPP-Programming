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
void insertatend(Node* &head,int val)
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
}
void makeCycle(Node* &head, int pos)
{
 Node*temp=head;
 Node* startnode;
 int count=1;
 
while(temp->next!=NULL)
  {
	if(count==pos)
                  
 {
 startnode=temp;
 }
 temp=temp->next;
 count++;
}
temp->next=startnode;
}
bool detectCycle(Node* &head)
{
  Node*slow=head;
  Node*fast=head;
  while(fast!=NULL && fast->next!=NULL)
  {

  slow=slow->next;
  fast=fast->next->next;
  
  if(fast==slow)
  {
  	return true;
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
	 makeCycle(head,3);
	 cout<<detectCycle(head)<<endl;
	 display(head);
	 return 0;
}












