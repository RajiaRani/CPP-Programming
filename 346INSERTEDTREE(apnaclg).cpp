 #include<iostream>
 using namespace std;
 class treenode{
 	public:
 		int data;
 		treenode *left,*right;
 		
	treenode(int value)
	{
		data=value;
		 left=right=NULL;
	}
 };
 
treenode* InsertNode(treenode*root, int value)
{
	if(root==NULL)
	{
		return new treenode(value);
	}
if(root->data>value)
{
	root->left=InsertNode(root->left,value);
}
else
{
 root->right=InsertNode(root->right,value);	
}
return root;
}
void inorder(treenode*root)
{
	if(root==NULL)
	{
		return;
	}
	inorder(root->left);
	cout<<root->data<<" "<<endl;
    inorder(root->right);
}
int main()
{
	treenode*root=NULL;
	root=InsertNode(root,10);
	InsertNode(root,1);
	InsertNode(root,22);
	InsertNode(root,14);
	InsertNode(root,100);
	InsertNode(root,109);
	InsertNode(root,18);
	InsertNode(root,45);
	InsertNode(root,90);
	
	inorder(root);
	cout<<endl;
	return 0;
}
	 
	 
	 
	 
	 
	 
	 
