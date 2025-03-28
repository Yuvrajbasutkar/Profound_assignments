// 3. Write a program to read a one dimensional array, print sum of all elements along with inputted array elements using Dynamic Memory Allocation.
#include<stdio.h>
#include<stdlib.h>
void main(){
    int*p,n,add=0;
    printf("Enter the Lenght of Array\n");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("Enter the Array\n");
    for(int i=0;i<n;i++){
        scanf("%d",p+i);
    }
    for(int i=0;i<n;i++){
        add=add+(*(p+i));
    }
    printf("The inputted array was\n");
    for (int i=0;i<n;i++){
        printf("%d\t",*(p+i));
    }
    printf("\nAnd the sum is %d",add);
}