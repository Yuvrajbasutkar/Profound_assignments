// Write a C program to compute sum of diagonal elements of an array
#include<stdio.h>
void main(){
    int a[3][3],sum=0;
    printf("Enter the Value of Matrix\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j){
                sum+=a[i][j];
            }
        }
    }
    printf("The sum of diagonal elements of matrix is %d",sum);
    
}