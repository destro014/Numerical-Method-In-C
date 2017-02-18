#include<stdio.h>
#include<math.h>
int fact(int n){
    if(n==1) return 1;
    else return(n*fact(n-1));
}
int main(){
    int n,i,j,k;
    float val=0,p,term1,term2,xp,x[10],fx[10],fd[10],h,s,prev;
    printf("enter the number of points:");
    scanf("%d",&n);
    printf("enter values of data points:");
    for(i=0;i<n;i++){
        scanf("%f%f",&x[i],&fx[i]);
    }
    printf("enter the value at which derivative is required :");
    scanf("%f",&xp);
    h=x[1]-x[0];
    s=(xp-x[0])/h;
    //calculating forward difference
    for(i=0;i<n;i++){
        fd[i]=fx[i];
    }
    for(i=0;i<n;i++){
        for(j=n-1;j>i;j--){
            fd[j]=(fd[j]-fd[j-1]);
        }
    }
    //calculating value of derivative
    val=fd[1];
    prev=1;
    for(i=2;i<n;i++){
        term1=1;
        for(k=2;k<=i;k++){
            term1=term1*(s-k+2);
        }
        term2=(s-i+1)*prev;
        prev=term1+term2;
        val=val+(fd[i]*(term1+term2))/fact(i);
    }
    printf("value of first derivative =%f",val);
}

