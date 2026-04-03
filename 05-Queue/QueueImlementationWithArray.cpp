#include<iostream>
#define SIZE 5
using namespace std;
 class queue
 { 
 int arr[SIZE];
 int front ;
 int rear;
 public:
 queue()
 { front=-1;
 rear=-1;
     
 }
 
void isEmpty()
{ if(front==-1&&rear==-1)
cout<<"empty"<<endl;

}
void isFull()
{ if(rear==SIZE-1)
cout<<"Full"<<endl;

}
void enqueue(int x)
{ if(rear==SIZE-1)
 cout<<"overflow"<<endl;

if(front==-1)
front=0;
arr[++rear]=x;
}
void dequeue()
{ if(front==-1)
 cout<<"underflow"<<endl;
arr[front++];
}

void display()
{ 
    for(int i=front;i<=rear;i++)
 cout<<arr[i]<<endl;
    
}


};


     
 
int main()
{ queue q1=queue();
q1.enqueue(1);
q1.enqueue(2);
q1.enqueue(3);
q1.enqueue(4);
q1.enqueue(5);
q1.display();
q1.isFull();
q1.dequeue();
q1.dequeue();
q1.dequeue();
q1.dequeue();
q1.dequeue();
q1.isEmpty();


return  0;

    
}