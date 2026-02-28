#include <stdio.h>
// Recursion practice
// task 1 (calculating sum of n number using recursion)
int sumofn(int n);
int main()

 {
int n;
printf("Enter the number\n");
scanf("%d",&n);
int sum1=sumofn( n);
printf("%d",sum1);

    return 0;
}
int  sumofn(int n)
{  int sum;\
    if(n==0)
{return 0;
}
    sum=n+sumofn(n-1);
    
    return sum;
}
