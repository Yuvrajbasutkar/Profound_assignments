// WAP to demonstrate typedef keyword.
#include<stdio.h>
void main(){
    typedef struct Employee
    {
        int eid;
        char name[10];
        float salary;
    
    } s;
    s e1[5];
    for(int i=0;i<5;i++){
        printf("Enter Employee id\n");
        scanf("%d",&e1[i].eid);
        getchar();
        printf("Enter Employee name\n");
        scanf("%s",e1[i].name);
        printf("Enter Employee salary\n");
        scanf("%f",&e1[i].salary);
    }
    printf("***Employee Details***\n");
    printf("Employee Id\t\tName\t\t\tSalary\n");
    for(int i=0;i<5;i++){
        printf("%d\t\t\t%s\t\t\t%2f\n",e1[i].eid,e1[i].name,e1[i].salary);
    }
}