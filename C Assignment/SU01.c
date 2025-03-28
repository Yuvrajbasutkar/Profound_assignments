// 1. Create a structure Student. Create array of 10 students using MACRO and display data in tabular form.
#include<stdio.h>
#define N 3
void main(){
    struct Student{
        int sid;
        char name[10];
    }stu[N];
    for(int i=0;i<N;i++){
        printf("Enter the Student Id\n");
        scanf("%d",&stu[i].sid);
        printf("Enter the Name\n");
        scanf("%s",stu[i].name);
        }
    printf("Sid\t\t\tName\n");
    for(int i=0;i<N;i++){
        printf("%d\t\t\t%s\n",stu[i].sid,stu[i].name);
    }
}