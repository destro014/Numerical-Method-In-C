#include<stdio.h>
#include<conio.h>
#include<math.h>
#define F(x) (a3*x*x*x+a2*x*x+a1*x+a0)
#define FD(x) (3*a3*x*x+2*a2*x+a1)
float a0,a1,a2,a3;
int main(){
    float x0,x1,fx0,fdx0,E,Er;
    printf("enter coefficients a3,a2,a1,a0:");
    scanf("%f%f%f%f",&a3,&a2,&a1,&a0);
    printf("enter initial guess & E:\n");
    scanf("%f%f",&x0,&E);
    while(1){
        fx0=F(x0);
        fdx0=FD(x0);
        x1=x0-fx0/fdx0;
        Er=(x1-x0)/x1;
        if(fabs(Er)<E){
            printf("Root = %f ",x1);
            break;
        }
        x0=x1;
    }
}
