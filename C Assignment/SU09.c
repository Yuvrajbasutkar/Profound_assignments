// 9. Create a structure Employee. Pass it to a function by value.
#include<stdio.h>

struct address{
    char city[20];
    char state[20];
    int pincode;
    };
    struct employee{
        int eid;
        char name[10];
        struct address add;
    };
void display(struct employee emp[],int n){
    printf("\n\n\nEmployee Details Are as follows.\n");
    for(int i=0;i<n;i++){
        printf("Employee id=%d\n",emp[i].eid);
        printf("Employee name=%s\n",emp[i].name);
        printf("Employee Address\ncity=%s\n",emp[i].add.city);
        printf("state=%s\n",emp[i].add.state);
        printf("pincode=%d\n\n\n",emp[i].add.pincode);
    }
}

void main(){
    struct employee emp[3];
    for( int i=0;i<3;i++){
        printf("Enter the Employee id\n");
        scanf("%d",&emp[i].eid);
        printf("Enter the name of the employee\n");
        scanf("%s",emp[i].name);
        getchar();
        printf("Enter the address of the employee\ncity=");
        scanf("%s",emp[i].add.city);
        printf("state=");
        scanf("%s",emp[i].add.state);
        printf("pincode=");
        scanf("%d",&emp[i].add.pincode);
        }
        display(emp,3);

}