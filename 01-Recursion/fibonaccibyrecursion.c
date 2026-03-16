
#include <stdio.h>
 int fabinocci (int n);

int main() {
    int number;

    printf("Enter the number :");
    scanf("%d",&number);
    int term =fabinocci (number);
    printf("The term is :%d ",term);
    
    

    
    
    
}
 int fabinocci (int number)
 { if(number==0||number==1)
 return number;
 
 
 return fabinocci (number-1)+ fabinocci(number-2);
     
 }