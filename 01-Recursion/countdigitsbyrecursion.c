#include<stdio.h>
int CountDigits(int n);
int main()

{ int n;
    int DigitCount;
  
    printf("Enter the number you want to  count the  digits  (only number>0 ):" );
    scanf("%d",&n);
      if(n>0)
    {DigitCount= CountDigits(n);
    printf("The count of the digit is : %d",DigitCount);
    }
    else
    printf("Sorry ! Enter number greater than 0");

    return 0;


}
int CountDigits(int n)
{
 

    if(n==0)
    return 0;
    
    return CountDigits(n/10) +1;
      
 





    
}