#include<iostream>
using namespace std;
class stack
{   public :
 
    int arr[5];
    int top=-1;
  public:
 void push(int n)
 { if(top==5-1)
 {
    cout<<" stack overflow"<<endl;
    return ;
 }
     ++top;
     arr[top]=n;
     cout<<arr[top]<<" pushed "<<endl;
   
       
 }
   public :
  void pop()
 {  if (top<0)
 {cout<<"Stack underflow"<<endl;
 return;
 }
 
     cout<<arr[top]<<" popped "<<endl;
     top--;
   
   

 }
   public :
 void  peek()
 { if (top<0)
 cout<<"stack empty"<<endl;
     cout<<"The top value of stack is : "<<arr[top]<<endl;
     
 }
   public :
 void isEmpty()
 { if (top==-1)
 cout<<"empty"<<endl;
 else
 cout<<"not empty"<<endl;
     
 }
 
 void display ()
 { for (int i=top;i>=0;i--)
 cout<<"the value of stack is :"<<arr[i]<<endl;
 }
 void size ()
 { cout<<"The size of stack is "<<top+1<<endl;
     
 }
 };
 
 
 
int main()
{ stack stack1;

stack1.push(1);
stack1.push(2);
stack1.push(3);
stack1.push(4);
stack1.display();
stack1.pop();
stack1.pop();
stack1.display();
stack1.peek();
stack1.size();
stack1.pop();
stack1.pop();
 stack1.isEmpty();
 
 return 0;


}