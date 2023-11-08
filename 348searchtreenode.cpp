#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node*left,*right;
 node(int val)
 {
 	data=val;
 	left=right=NULL;
 	}
};
node* search(node*root,int key)
{
	if(root==NULL)
	{
		return NULL;
	}
	if(root->data ==key)
	{
		return root;
	}
	if(root->data >key)
	{
		return search(root->left, key);
	}
	else
	{
		return search(root->right, key);
	}
}
int main()
{
	node*root=new node(1);
	root->left=new node(19);
	root->right=new node(34);
	root->left->left=new node(13);
	//root->left->right=new node(22);
	root->right->left=new node(12);
	root->right->right=new node(38);

   if (search(root,12)==NULL)
   {
   	cout<<" key does not exists "<<endl;
   }
   else
   {
   	cout<<" key exists "<<endl;
   }
   	return 0;
}