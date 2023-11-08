#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node*next;
};
class linkedlist{
	private:
		Node*head;
		public:
		linkedlist()
		{
			head=NULL;
		}
		void InsertNode(int data);
		void DeleteNode();
		void Display();
};
void linkedlist ::InsertNode(int data)
	{
		Node* n1=new Node();
		n1->data=data;
		n1->next=head;
		head=n1;
	}
void linkedlist :: DeleteNode()
	{
		Node* temp=head;
		if(head==NULL)
		{
			cout<<" Node is already empty so we cant delete the node "<<endl;
			return ;
		}
		head=head->next;
		delete(temp);
		
	}
void linkedlist :: Display()
	{
		Node* temp= new Node();
		temp=head;
		cout<<endl<<" linked list is - "<<endl;
		int count=0;
		while(temp!=NULL)
		{
			cout<<temp->data<<"  ";
			temp=temp->next;
			count ++;
		}
		cout<<endl<<" There are "<<count<<" itmes in linked list "<<endl;
	}
	int main()
	{
		linkedlist*list=new linkedlist();
		list->InsertNode(50);
		list->InsertNode(40);
		list->InsertNode(30);
		list->InsertNode(20);
		list->InsertNode(10);
		list->InsertNode(00);
		list->Display();
		list->DeleteNode();
		list->DeleteNode();
		list->DeleteNode();
			list->Display();
		
		return 0;
	}
	
	
	
	
	
	
	
	
	
	
	
