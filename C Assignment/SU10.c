// 10. Make a structure for banking customer which includes all the essential information like Name,Acc. No, Balance etc
#include <stdio.h>
void main(){
    int a;
    struct address{
        char city[20];
        char state[20];
        int pincode;
        };
    struct account{
        int acno;
        char name[20];
        struct address add;
        float balance;
    }acc[3];
    printf("Enter the Details of Account holder\n");
    for (int i=0;i<3;i++)
{
    printf("Enter the Account Number=");
    scanf("%d",&acc[i].acno);
    printf("Enter the name of the Account holder=");
    scanf("%s",acc[i].name);
    printf("Enter the address\ncity=");
    scanf("%s",acc[i].add.city);
    printf("state=");
    scanf("%s",acc[i].add.state);
    printf("Pincode=");
    scanf("%d",&acc[i].add.pincode);
    printf("Enter the Balance available\n");
    scanf("%f",&acc[i].balance);
}
printf("\n\n\nEmployee Details Are as follows.\n");
for(int i=0;i<3;i++){
    printf("Employee id=%d\n",acc[i].acno);
    printf("Employee name=%s\n",acc[i].name);
    printf("Employee Address\ncity=%s\n",acc[i].add.city);
    printf("state=%s\n",acc[i].add.state);
    printf("pincode=%d\n",acc[i].add.pincode);
    printf("Balance=%f\n\n\n",acc[i].balance);
}
};