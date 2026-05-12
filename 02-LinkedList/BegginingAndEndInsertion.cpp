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
node *temp=nullptr;



cout<<"Enter the number of nodes ";
cin>>n;
node * firstNode= new node();
cout<<"Enter the first value";
cin>>firstNode->data;
firstNode->link=nullptr;
head=firstNode;
current=head;






for (int i=0;i<n-1;i++)
{ node *newNode= new node();
cout<<"Enter the next value";
cin>>newNode->data;
newNode->link=nullptr;
current->link=newNode;
current=newNode;

}

node *nodeAtBeggining= new node();
cout<<"Enter the value you want to insert in the beggining ";
cin>>nodeAtBeggining->data;
nodeAtBeggining->link=head;
head=nodeAtBeggining;
temp=head;

node *nodeAtEnd= new node();
cout<<"Enter the value you want to insert at end";
cin>>nodeAtEnd->data;
nodeAtEnd->link=nullptr;
current->link=nodeAtEnd;
current=nodeAtEnd;













while ( temp!=nullptr)
{ 
cout<<"The value is :"<<temp->data<<endl;
 temp=temp->link;
    
}

delete head;
delete temp;
delete current;
delete nodeAtBeggining;
delete nodeAtEnd;




    return 0;
}