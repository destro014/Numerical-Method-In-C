#include<stdio.h>
int main()
{
    int n,b,i;
     printf("Enter any  number :\n");
    for(i=0;i<10;i++)
    {
    printf("\n");
    scanf("%d",&n);
    b=n%3;
    printf("%d->%d",n,b);
    }

    getch();
    return 0;
}
