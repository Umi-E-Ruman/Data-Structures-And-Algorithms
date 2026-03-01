#include<stdio.h>
int PrintNto1(int n);
int main()
{  int n;
    int output;
    printf("Enter n");
    scanf("%d",&n);
    output=PrintNto1(n);


    return 0;

}
int PrintNto1(int n)
{ if (n==0)
    return 0;
    
    PrintNto1(n-1);
    printf("%d  ",n);

    
    

}