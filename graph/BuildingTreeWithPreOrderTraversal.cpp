// building tree with preorder traversal
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
node* buildTree(vector<int>graphNodeValue)
{
   idx++;
if(graphNodeValue[idx]==-1)
return NULL;
node* root=new node(graphNodeValue[idx]);
root->left=buildTree(graphNodeValue);
root->right =buildTree( graphNodeValue);
return root;


    
}


int main()
{  vector<int>graphNodeValue={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
   node* root= buildTree(graphNodeValue);
    cout<<root->data<<endl;
   cout<<root->left->data<<endl;
   cout<<root->right->data<<endl;
 
return 0;

    
}