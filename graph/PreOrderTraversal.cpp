#include<iostream>
#include<vector>
using namespace std;
class node
{ public :
int data;
node* left;
node*right;
node( int value)
{ data=value;
  left=NULL;
  right=NULL;
}

};
static int idx=-1;
node* binaryTree(vector<int>preorder)
{
   idx++;
if(preorder[idx]==-1)
return NULL;
node* root=new node(preorder[idx]);
 root->left=binaryTree( preorder);
root->right =binaryTree( preorder);
return root;


    
}

void preOrderTraversal( node* root)
{  if(root==NULL)
    return;
   cout<<root->data<<" ";
   preOrderTraversal(root->left);
  preOrderTraversal ( root->right);

}







int main()
{  vector<int>preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
  node* root= binaryTree(preorder);
preOrderTraversal(root);
cout<<endl;
    

   
   return 0;

}