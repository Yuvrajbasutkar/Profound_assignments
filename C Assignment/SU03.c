#include <stdio.h>
#include <string.h>
union Data {
    int eid;
    int salary;
    char name[20];
};

void main() {

    union Data e1; 
    printf("Size of union: %lu bytes\n", sizeof(e1));


    printf("Enter Employee id\n");
    scanf("%d",&e1.eid);
    getchar();

    printf("\nAfter setting ID:\n");
    printf("ID: %d\n", e1.eid);
    getchar();

   
    printf("Enter Employee Salary\n");
        scanf("%f",&e1.salary);
        getchar();
    printf("\nAfter setting Salary:\n");
    printf("Salary: %.2f\n", e1.salary);
    printf("ID (corrupted due to shared memory): %d\n", e1.eid); 

    printf("Enter Employee name\n");
        scanf("%s",e1.name);
    printf("\nAfter setting Name:\n");
    printf("Name: %s\n", e1.name);
    printf("Salary (corrupted due to shared memory): %.2f\n", e1.salary);
}
