#include<stdio.h>
void main()
{
    int n,a=0,b=1,c=0,i;
    printf("Enter the number to which you want to find a series:");
    scanf("%d",&n);
    printf("Fibonacci series:%d,%d,",a,b);
    for(i=3;i<=n;++i)
    {
        c=a+b;
        a=b;
        b=c;
         printf("%d,",c);
    }
}
