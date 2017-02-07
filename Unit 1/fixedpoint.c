#include<stdio.h>
#include<math.h>
float pramod(float);
main()
{
    float a[100],b[100],c=100.0;
    int i=1,j=0;
    b[0]=(cos(0)-3*0+1);
    printf("\nEnter initial guess:\n");
    scanf("%f",&a[0]);
    printf("\n\n The values of iterations are:\n\n ");
    while(c>0.00001)
    {
        a[j+1]=pramod(a[j]);
        c=a[j+1]-a[j];
        c=fabs(c);
        printf("%d\t%f\n",j,a[j]);
        j++;

    }
    printf("\n The root of the given function is %f",a[j]);
}
float pramod(float x)
{
    float y;
    y=(cos(x)+2)/3;
    return y;
}
