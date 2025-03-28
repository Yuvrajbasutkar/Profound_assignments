// 13. Write a program to print all the LEADERS in the array. (An element is LEADER if it is greate than all the elements to its right side.)
#include<stdio.h>
void main(){
    int n,l=0;
    printf("Enter the number of elements in array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements in array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("the elements in array\n");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\nThe Leaders lements are\n");
    for(int i=0;i<n;i++){
        if(l<a[i]){
            l=a[i];
            printf("%d\t",l);
        }
    }



}