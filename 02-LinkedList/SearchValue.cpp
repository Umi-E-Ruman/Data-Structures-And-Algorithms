#include<iostream>
using namespace std;
class node 
{  public :
    int data;
node * link;
public :
node() :data(0),link(nullptr)
{}

};
    

int main()
{ int n;
node *head=nullptr;
node *current=nullptr;
int valueToBefound=0;
node *temp=nullptr;

cout<<"Enter the number of nodes : ";
cin>>n;
node * firstNode= new node();
cout<<"Enter the first value :";
cin>>firstNode->data;
firstNode->link=nullptr;
head=firstNode;
current=head;
temp=head;

for (int i=0;i<n-1;i++)
{ node *newNode= new node();
cout<<"Enter the next value :";
cin>>newNode->data;
newNode->link=nullptr;
current->link=newNode;
current=newNode;
}

cout<<"Enter the value you want to search :";
cin>>valueToBefound;

while ( temp!=nullptr)
{if(valueToBefound==temp->data)
cout<<"found";
 temp=temp->link;
}

return 0;
}


