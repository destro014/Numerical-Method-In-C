#include<stdio.h>
#include<conio.h>
int a0,a1,a2,a3;
float f(float x){
    return (a3*x*x*x+a2*x*x+a1*x+a0);
}
int main(){
    float xl,xu,xm,fxl,fxu,fxm,E,Era;
    printf("Enter coefficients a3,a2,a1,a0:");
    scanf("%d%d%d%d",&a3,&a2,&a1,&a0);
    printf("Enter initail bracket and E\n");
    scanf("%f%f%f",&xl,&xu,&E);
    fxl=f(xl);
    fxu=f(xu);
    while(1){
        fxl=f(xl);
        fxu=f(xu);
        xm=(xl+xu)/2;
        fxm=f(xm);
        if((fxl*fxm)== 0){
            printf("Root= %f",xm);
        }
        else if((fxl*fxm)<0)
            xu=xm;
        else
            xl=xm;
        Era=(xu-xl)/xu;
        if(Era<E){
            printf("root =%f",xm);
            break;
        }
    }
}
