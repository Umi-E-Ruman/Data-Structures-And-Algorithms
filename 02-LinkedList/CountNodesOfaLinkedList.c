#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *link;
};
int main()
{ struct node* first_node=(struct node*) malloc(sizeof(struct node)) ;
 first_node->data=5;
 first_node->link=NULL;
struct  node* head =first_node;
struct  node* temp =first_node;
struct  node* current =temp;



 for(int i=0;i<3;i++)
 {struct  node *new_node=(struct node*) malloc (sizeof(struct node));
     new_node->data=5;
     new_node->link=NULL;
    temp->link=new_node;
    temp=new_node;

}
 int count =0;
 while (current !=NULL)
 { count++;
    

 }


 count++;


 
}