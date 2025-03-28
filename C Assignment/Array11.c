// WAP to check whether two matrtices are identical or not.
#include<stdio.h>
void main(){
    int a[3][3],b[3][3];
    int c=0;
    printf("Enter the Value of first Matrix\n");

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the Value of second Matrix\n");

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           if(a[i][j]!=b[i][j]){
            c=1;
            break;
           }
        }
    }         
    if(c==0){
       printf("Matrices are identical");}
       else{
    }         ("Matrices are not identical");

       }