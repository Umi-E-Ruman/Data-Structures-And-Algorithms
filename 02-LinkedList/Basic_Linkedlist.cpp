#include<iostream>
using namespace std;
class node
 { public :
     int data;
 node  *link;
 public :
node() : data(0), link(nullptr)
 {} 
 
  };
int main()
{ node *head=nullptr;
node *current=nullptr;
 


node* node1 = new node();
node* node2 = new node();


head=node1;
node1->data=5;
node1->link=nullptr;

node2->data=10;
node2->link=nullptr;
node1->link=node2;
current=head;
while(current!=nullptr)
{ cout<<current->data<<endl;
current=current->link;
    
}

delete node1;
delete node2;
    return 0;
}