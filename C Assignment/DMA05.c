// 5. Write a program to read and print the N student details using structure and Dynamic Memory Allocation.
#include<stdio.h>
#include<stdlib.h>
void main(){
    int n;
    struct student{
        int sid;
        char name[10];
        int class;
        char div[2];
    };
    printf("Enter the number of students=");
    scanf("%d",&n);
    struct student *p=(struct student*)malloc(n*sizeof(struct student));
    printf("Enter the deatails of the students\n");
    for (int i=0;i<n;i++){
    printf("\nStudent ID=");
    scanf("%d",&p->sid);
    printf("Student name=");
    scanf("%s",p->name);
    printf("class=");
    scanf("%d",&p->class);
    printf("Division=");
    scanf("%s\n",p->div);
    getchar();
    }
    for (int i=0;i<n;i++){
    printf("\n\nThe Details of the students are as follows\n");
    printf("student id=%d\n",p->sid);
    printf("student name=%s\n",p->name);
    printf("class=%d\n",p->class);
    printf("Division=%s\n",p->div);
    }

}