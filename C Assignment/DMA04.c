// 4. Write a program to read and print the student details using structure and Dynamic Memory Allocation.
#include<stdio.h>
#include<stdlib.h>
void main(){
    struct student{
        int sid;
        char name[10];
        int class;
        char div[2];
    };
    struct student *p=(struct student*)malloc(sizeof(struct student));
    printf("Enter the deatails of the student\n");
    printf("Student ID=");
    scanf("%d",&p->sid);
    printf("Student name=");
    scanf("%s",p->name);
    printf("class=");
    scanf("%d",&p->class);
    printf("Division=");
    scanf("%s",p->div);
    getchar();

    printf("\n\nThe Details of the students are as follows\n");
    printf("student id=%d\n",p->sid);
    printf("student name=%s\n",p->name);
    printf("class=%d\n",p->class);
    printf("Division=%s\n",p->div);

}