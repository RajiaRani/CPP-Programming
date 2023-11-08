#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		int key;
		Node *next;
	Node()
	{
		data=0;
		key=0;
		next=NULL;
	}
	Node(int d, int k)
	{
		data=d;
		key=k;
		
	}
};
	
	class circularlinkedlist{
		
    public:
	Node*head;


	circularlinkedlist()
	{
		head=NULL;
		}
			circularlinkedlist(Node *n)
	{
		head=n;
		}
		
		

   Node* nodeExists(int k)
   {
   	
   Node*temp=NULL;
   Node*ptr=head;
   if(ptr==NULL)
   {
   	return temp;
   }
   else
   {
   	do
   	{
   		if(ptr->key==k)
   		{
   			temp=ptr;
		   }
		   temp=temp->next;
	   
   
   }
   	while(head!=ptr);
   	return temp;
		   
   }
  }
  

  	 
// 1. appended node 
 void appendnode(Node *n )
 {
 	if(nodeExists(n->key)!=NULL)
 	{
 		cout<<"Node already exist with this key value "<<n->key<<" enter the another key value "<<endl;
	 }
	 else
	 {
	 	if(head==NULL)
	 	{
	 		head=n;
	 		n->next=head;
	 		cout<<"Node appended at first head position "<<endl;
		 }
		 else
		 {
		 	Node*ptr=head;
		 	while(ptr->next!=NULL)
		 	{
		 		ptr=ptr->next;
			 }
			 ptr->next=n;
			 n->next=head;
			 cout<<"NODE APPENDED "<<endl;
		 }
	 	}
	 }
	 //2. prepended node
	 
	void prependnode(Node*n)
	 {
	 	if(nodeExists(n->key)!=NULL)
	 	{
	 		cout<<"Node is already present with this key value "<<n->key<<"Please enter the different key value "<<endl;
	 		}
	 		else
	 		{
	 			Node*ptr=head;
	 			while(ptr->next!=NULL)
	 				{
	 					ptr=ptr->next;
					 }
					 ptr->next=n;
					 n->next=head;
					 n=head;
					 cout<<"NODE PREPENDED "<<endl;
			 }
	 		}
	//3. insert node
	
	void insertnode(Node*n, int k)
	{
		Node*ptr=nodeExists(k);
		if(head==NULL)
		{
			cout<<"NO NODE EXISTS "<<k<<endl;
		}
		else
		{
			if(nodeExists(n->key)!=NULL)
			{
				cout<<"no node exists with this key value "<<n->key<<" Enter the different key value "<<endl;
			}
			
			else
			{
				Node*ptr=head;
				if(ptr->next==head)
				{
					ptr->next=n;
					n->next=head;
					cout<<"node inserted at the end "<<endl;
				}
				else
				{
					n->next=ptr->next;
					ptr->next=n;
					cout<<"Node inserted in between "<<endl;
				}
			}
		}
	}
	//4. delection
	void deletebykey(int k)
	{
		Node*ptr=nodeExists(k);
		if(ptr==NULL)
		{
		cout<<" no node exists with this key value "<<k<<endl;
		}
		else
		{
			if(ptr==head)
			{
				if(head->next==NULL)
				{
					head=NULL;
					cout<<"Head Node unlinked ..... List Empty ";
				}
	else
	 {
		Node* ptr1=head;
		if(ptr1->next!=head)
		{
			ptr1=ptr1->next;
		}
		ptr1->next=head->next;
		head=head->next;
		cout<<"Node unlinked with this key value "<<k<<endl;
	}
	}     
  else 
  {
  	Node* temp=NULL;
  	Node* prevptr=head;
  	Node* currptr=head->next;
  	
  	while(currptr!=NULL)
  	{
  		if(currptr->key==k)
  		{
  			temp=currptr;
  			currptr=NULL;
		  }
		  else
		  {
		  	prevptr=prevptr->next;
		  	currptr=currptr->next;
		  }
	  }
	  prevptr->next=currptr->next;
	  cout<<"Node unlinked with key values "<<k<<endl;
  }
  
  }
}
// 6. update the data
void updatenodeByKey(int k,Node*n)
  {
  	Node*ptr=nodeExists(k);
  	if(ptr!=NULL)
  	{
  		ptr->data=k;
  		cout<<"Node data updated succesfully "<<k<<endl;
	  }
	else
	{
		cout<<"Node doesnt exists with this key value "<<k<<endl;
	}
  }
	 
	 
	 // 7. printed 
	 
	 void printlist()
	 {
	 	if(head==NULL)
	 	{
	 		cout<<" no singly linked list "<<endl;
		 }
		 else 
		 {
		 	cout<<" singly linked list values "<<endl;
		 	Node*temp=head;
		 	
	do
	{
	cout<<"( "<<temp->key <<" , "<< temp->data << " , "<<temp->next<<" ) --> "<<endl;
	temp=temp->next;
			 }
 while(temp!=NULL);
		 	
	}
	 }
 

	};

	
	
  
  
	int main()
	{
			
		circularlinkedlist c;	
		int option;
		int key1, k1, data1;
		do
		{
		cout<<"what operation do you want to perform? select option number \ enter 0 to exist "<<endl;
		cout<<"1. AppendNode() "<<endl;
		cout<<"2. PrependNode() "<<endl;
		cout<<"3. InsertNode() "<<endl;
		cout<<"4. DeleteNode() "<<endl;
		cout<<"5. UpdateNode() "<<endl;
		cout<<"6. print() "<<endl;
		cout<<"7.Clear Screen "<<endl;
		
		cin>>option;
		Node* n1= new Node();
		
		switch (option)
		{ case 0:
			break;
			case 1:
				cout<<"Appended node operation \n enter the key and data to be appended node "<<endl;
				cin>>key1;
				cin>>data1;
				n1->key=key1;
				n1->data=data1;
				c.appendnode (n1);
				break;
				
				
					case 2:
					cout<<"Prepended node operation \n enter the key and data to be appended node "<<endl;
				cin>>key1;
				cin>>data1;
				n1->key=key1;
				n1->data=data1;
				c.	prependnode (n1);
				break;
				
				case 3:
					cout<<"Insert node after operation \n enter the key of existing node after which you want to insert new node "<<endl;
					cin>>k1;
					cout<<"enter key and data of the new node "<<endl;
				cin>>key1;
				cin>>data1;
				n1->key=key1;
				n1->data=data1;
				c.	insertnode (n1,k1);
				break;
				
				case 4:
					cout<<" Delete node by operation \n enter key of the node to be delete "<<endl;
					cin>>k1;
					c.deletebykey(k1);
					break;
					
					case 5:
						cout<<"Update node by key operation \n enter the key and data which you want to be update "<<endl;
						cin>>key1;
						cin>>data1;
						c.updatenodeByKey(key1,n1);
						break;
						
						case 6:
							c.printlist();
							break;
							
							case 7:
								system("cls");
								break;
								
								default:
									cout<<"Enter proper option number "<<endl;
										}
										}
										while(option!=0);
										return 0;
}
	
			  
			  		
	 		
	 		
	 		
	 		
	 		
	 		
	 		
	 		
	 		
	 		
	 		
	 		
	 		
	 		
	 		
	 		
	 		
	 		
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 








