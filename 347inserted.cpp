#include<iostream>
using namespace std;
class node{
	int data;
	node*left,*right;
	node(int val)
	{
		data=val;
		left=right=NULL;
	}
};
class binary{
	public:
	node*root;
 binary()
 {root=NULL;}
void insert(node*new node, int val)
{
	if(root==NULL)
	{   root=new node;
		return;
	}
	else
	{
		node*temp=root;
		while(temp!=NULL)
		if(temp->val==new node->val)
		{
			cout<<" value already exist / enter the different value "<<endl;
			return ;
	}
	else if  ((temp->val>new node->val)&&(temp->left==NULL))
	{
		temp->left=new node;
		cout<<" value inserted at the left side "<<endl;
		break;
	}
	else if (temp->val>new node->val)
	{
		temp=temp->left;
	}
	else if  ((temp->val<new node->val)&&(temp->right==NULL))
	{
		temp->right=new node;
		cout<<" value inserted at the right side "<<endl;
		break;
	}
	else
	{
		temp=temp->right;
	}
	}
	}
void inorder(node*r)
{
	if(r==NULL)
	return ;
	inorder(r->left);
	cout<<r->val<<endl;
	inorder(r->right);
}
}; 
int main()
{
	binary b;
	new node->value=val;
	b.insert(root,10);
	b.insert(root,1);
	b.insert(root,56);
	b.insert(root,19);
	b.inorder(root);
	return 0;
}


















