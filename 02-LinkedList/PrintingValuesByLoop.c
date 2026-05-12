#include<stdio.h>
#include<stdlib.h>
struct node{
 int data;
 struct node *link;
    
};
int main(){
int n;
 struct node*head=NULL;
  struct node*temp=NULL;
    struct node*current=NULL;



 printf("Enter number of nodes you want to add :");
 scanf("%d",&n);

 struct node* node_1= (struct node*)malloc(sizeof(struct node));
 printf("Enter first value you want to add :");
 scanf("%d",&node_1->data);
 node_1->link=NULL;

 head=node_1;
 temp=node_1;
  current=head;




    

for(int i=0;i<n-1;i++)
{struct node* new_node= (struct node*)malloc(sizeof(struct node));
    printf("Enter the next value : ");
    scanf("%d",&new_node->data);
     new_node->link=NULL;
    
     temp->link=new_node;
     temp=new_node;
    
  
    
}


while(current !=NULL)
{ 
    printf("The value is :%d\n",current->data );
     current=current->link;
   


}



return 0;

}