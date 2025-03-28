// 1. WAP to calculate average marks of a 10 students
#include<stdio.h>
void main(){
    int a[10];
    int avg,v=0;
    printf("Enter the Marks of 10 Students\n");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<10;i++){
        v=v+a[i];
    }
    avg=v/10;
    printf("Average of 10 students is %d",avg);
    
}