#include<stdio.h>
int fact(int);
int main()
{
int n,f;
printf("Enter the number:");
scanf("%d",&n);
f=fact(n);
printf("The multiplication is: %d",f);
return 0;
}
int fact(int n)
{
int f;
if(n==0)
{
return 1;
}
else
{
f=n*fact(n-1);
return f;
}
}
