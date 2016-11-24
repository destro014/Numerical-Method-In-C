#include<stdio.h>
#include<conio.h>
void main(){
    //inputs of coefficients and constant terms.
    float a[15][15];
    int n,i,j,b,d;
    printf("Enter the number of variables:");
    scanf("%d",&n);
    printf("\nEnter the coefficients:");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("\na[%d][%d]:",i,j);
            scanf("%f",&a[i][j]);
        }
    }
    printf("\nEnter the constants terms:");
    for(i=0;i<n;i++){
        scanf("%f",&a[i][n]);
    }

    printf("\n\n The matrix in augmented form is:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n+1;j++){
            printf("%f\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<=n;i++){
            int d=a[i][j];
        if(i==j){
            for(j=i;j<=n;j++){
                a[i][j]=a[i][j]/a[i][j];
                int b =a[i][j];
            }
        }
        else
            a[i][j]=a[i][j]-d*b;
    }
}
