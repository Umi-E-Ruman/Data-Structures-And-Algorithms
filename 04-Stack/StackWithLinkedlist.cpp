#include<iostream>
using namespace std;
class node 
{  public :
    int data;
node * link;
    
};
class stack
{ node *top;  
    public :
    stack()
    { top=nullptr;
    }
  void push(int x)
{  node *node1=new node ();
    node1->data=x;
    node1->link=top;
    top=node1;
}
  
  void pop()
 {  if (top==nullptr)
 {cout<<"Stack underflow"<<endl;
 return;
 }
 node *temp=top;
 cout<<temp->data<<" :popped"<<endl;
 top=top->link;
 delete temp;
 }
   
   

void isEmpty()
{ if (top==nullptr)
cout<<"Stack empty"<<endl;
else
cout<<"stack not empty"<<endl;
    
}
void peek()
{ if (top==nullptr)
cout<<"emptyyyy!!"<<endl;
    cout<<"the top value is "<<top->data<<endl;
    
}
void size()
{ int count=0;
node *temp=top;
while (temp!=nullptr)
{ count++;
 temp=temp->link;
 
    
}
cout<<"the size of stack is :"<<count<<endl;
}



 
 void display ()
 { node *temp=top;
 while(temp!=nullptr)
{ cout<<"the value of stack is :"<<temp->data<<endl;
 temp=temp->link;
}
 }
 

};



 
 
 
 
int main()
{ stack stack1;

stack1.push(1);
stack1.push(2);
stack1.push(3);
stack1.push(4);
stack1.size();
stack1.display();
stack1.peek();
stack1.pop();
stack1.pop();
stack1.size();
stack1.display();
stack1.isEmpty();


stack1.pop();
stack1.pop();
stack1.isEmpty();
 
 return 0;


}