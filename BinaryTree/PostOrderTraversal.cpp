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



void postOrderTraversal( node* root)
{  if(root==NULL)
    return;

   postOrderTraversal(root->left);
   postOrderTraversal ( root->right);
     cout<<root->data<<" ";

}






int main()
{  vector<int>preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
  node* root= binaryTree(preorder);
postOrderTraversal(root);
cout<<endl;

    

   
   return 0;

}