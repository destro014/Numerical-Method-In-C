#include<stdio.h>
#include<math.h>
int main(){
    int n,i,j,k;
    float factor,term,vod ,xv,x[10],fx[10],a[10];
    printf("enter the number of points:");
    scanf("%d",&n);
    printf("enter values of data points:");
    for(i=0;i<n;i++){
        scanf("%f%f",&x[i],&fx[i]);
    }
    printf("enter the vaule at which derivative is required :");
    scanf("%f",&xv);
    //calculating divided difference
    for(i=0;i<n;i++){
        a[i]=fx[i];
    }
    for(i=0;i<n;i++){
        for(j=n-1;j>i;j--){
            a[j]=(a[j]-a[j-1])/(x[j]-x[j-1-i]);
        }
    }
    //calculating value of derivative
    vod=a[1];
    for(i=2;i<n;i++){
        term=0;
        for(j=0;j<i;j++){
            factor=1;
            for(k=0;k<i;k++){
                if(k!=j)
                    factor=factor*(xv-x[k]);
            }
            term=term+factor;
        }
        vod=vod+(a[i]*term);
    }
    printf("value of first derivative =%f",vod);
}
