#include<iostream>
#define SIZE 5
using namespace std;
 class queue
 { 
 int arr[SIZE];
 int front ;
 int rear;
 int currentSize=0;
 public:
 queue()
 { front=-1;
 rear=-1;
     
 }
 
void isEmpty()
{ if(currentSize==0)
cout<<"empty"<<endl;

}
void isFull()
{ if(currentSize==SIZE)
cout<<"Full"<<endl;

}
void enqueue(int x)
{ if(currentSize==SIZE)
 cout<<"overflow"<<endl;

if(front==-1)
front=0;
rear=(rear+1)%SIZE;
arr[rear]=x;
currentSize++;
}
void dequeue()
{ if(front==-1)
 cout<<"underflow"<<endl;
 front=(front+1)%SIZE;

currentSize--;
}
void display() 
{
if(front==-1) 
cout<<"empty";

int i = front;
for(int count = 0; count < currentSize; count++) {
cout << arr[i] << " ";
i = (i + 1) % SIZE;
}
cout << endl;
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
q1.enqueue(6);
q1.display();
q1.dequeue();
q1.dequeue();
q1.dequeue();
q1.dequeue();
q1.dequeue();
q1.isEmpty();


return  0;

    
}