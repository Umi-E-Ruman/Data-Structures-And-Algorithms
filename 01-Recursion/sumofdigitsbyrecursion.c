#include<stdio.h>
int SumOfDigits(int n);
int main()

{ int n;
    int Sum;
    printf("Enter the number you want to calculate the sum of digits ");
    scanf("%d",&n);
    Sum= SumOfDigits( n);
    printf("The sum of the digit is : %d",Sum);

    return 0;


}
int SumOfDigits(int n)
{  if(n==0)
    return 0;
    int LastNo ;
    LastNo=n%10;
    return LastNo+SumOfDigits(n/10);


    
}