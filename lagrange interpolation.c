#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int n,i,j;
    float b,x,l,v=0,ax[10],fx[10],Lx[10];
    printf("Enter the number of points:");
    scanf("%d",&n);
    printf("Enter the value of x:");
    scanf("%f",&x);
    for(i=0;i<n;i++){
        printf("Enter the value of x and fx at i= %d\n",i);
        scanf("%f%f",&ax[i],&fx[i]);
    }
    for(i=0;i<n;i++){
        l=1.0;
        b=1.0;
        for(j=0;j<n;j++){
            if(j!=i){
                l=l*((x-ax[j]));
                b=b*(ax[i]-ax[j]);
        }
        //Lx[i]=l;
    }
        v=v+fx[i]*(l/b);
    }
    printf("interpolation value=%lf",v);
    return 0;
}
