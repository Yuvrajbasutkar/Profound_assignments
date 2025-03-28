// 1. Write a program to create memory for int, char and float variable at run time.
#include <stdio.h>
#include<stdlib.h>
void main(){
    int *p,i,n;
    printf("Enter the no. of arrays\n");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    if(p==NULL){
        printf("Insufficient Memory Allocation\n");
    }
    printf("Enter the array Elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",p+i);
    }
    printf("\n\nThe Array is\n");
    for (int i=0;i<n;i++){
        printf("%d\n",*(p+i));
    }}