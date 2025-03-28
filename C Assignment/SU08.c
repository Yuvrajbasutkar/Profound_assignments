// 8. Nest Date structure into Employee as to display joining date of employee.
#include <stdio.h>
void main(){
    struct Joining{
            int date;
            char month[10];
            int year;
        };
        struct employee{
            int eid;
            char name[10];
            struct Joining add;
        }emp[3];
        for( int i=0;i<3;i++){
            printf("Enter the Employee id\n");
            scanf("%d",&emp[i].eid);
            printf("Enter the name of the employee\n");
            scanf("%s",emp[i].name);
            getchar();
            printf("Enter the Joining date of employee\ndate=");
            scanf("%d",&emp[i].add.date);
            printf("month=");
            scanf("%s",emp[i].add.month);
            printf("year=");
            scanf("%d",&emp[i].add.year);
            }
            printf("Employee Details Are as follows.\n");
            for(int i=0;i<3;i++){
                printf("Employee id=%d\n",emp[i].eid);
                printf("Employee name=%s\n",emp[i].name);
                printf("Employee Joining date=%d-%s-%d\n\n\n",emp[i].add.date,emp[i].add.month,emp[i].add.year);
                
               
            }
        
        

    }