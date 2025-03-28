// 7. Create Date structure having attributes as dd,mm,yy.
#include<stdio.h>
void main(){
    struct date{
        int date;
        char month[10];
        int year;
    }d;
    printf("Enter the date\n");
    printf("Enter the date\n");
    scanf("%d",&d.date);
    printf("Enter the month\n");
    scanf("%s",d.month);
    printf("Enter the Year\n");
    scanf("%d",&d.year);

    printf("The date is %d-%s-%d",d.date,d.month,d.year);


}