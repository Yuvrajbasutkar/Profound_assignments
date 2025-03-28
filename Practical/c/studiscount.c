// 3. WAP to accept Cost Price from user and ask whether the user is a student or not. If the user is 
// student and cost price is greater than 500, give discount of 10% ELSE discount will be 5%. If user 
// is not student and cost price is greater 500 then give discount of 8% ELSE discount will be 2%. 
// (Take all inputs from USER)

#include<stdio.h>
void main(){
    int cost_price;
    char stu;
    float discount;

    printf("\nEnter Cost Price: ");
    scanf("%d", &cost_price);
    
    printf("Are you Student?\nY or N: ");
    scanf(" %c", &stu);
    if (cost_price>=500 && (stu=='Y'|| stu=='y')){
        discount= (cost_price/100)*10;  
        printf("Student Discount is 10%%: %f", cost_price-discount);    
    }

    else if(cost_price<=500 && (stu=='Y'|| stu=='y')){
        discount= (cost_price/100)*5;  
        printf("Final Discount is 5%%: %f", cost_price-discount);
    }

    else if(cost_price>=500 && (stu=='N'|| stu=='n')){
        discount= (cost_price/100)*8;  
        printf("Final Discount is 8%%: %f", cost_price-discount);
    }

    else if (cost_price<=500 && (stu=='N'|| stu=='n')){
        discount= (cost_price/100)*2;  
        printf("Final Discount is 2%%: %f", cost_price-discount);

    }



}