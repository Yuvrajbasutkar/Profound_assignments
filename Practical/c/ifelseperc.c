// 5.  WAP a program to accept Percentage from user and check the GRADE
//     A. Above 70% - Grade A                      
//     B. Between 60% to 70% - Grade B+. 
//     C. Between 45% to 60% - Grade B. 
//     D. Between 35% to 45% - Grade C.
//     E.  Less than 35% - Fail

#include<stdio.h>

void main () {

    float a=0.0;
    printf("Enter your percentage: ");
    scanf("%f", &a);

    if(a<=100){
        
    
    if (a>70) {
        printf("GRADE A");
    }

    else if (a>60 && a<70) {
        printf("GRADE B++");
    }

    else if (a>45 && a<60) {
        printf("GRADE B++");
    }

    else if (a>35 && a<45) {
        printf("GRADE B++");
    }

    else {
        printf("FAIL");
    }
}
    else {
    printf("INVALID INPUT!!");
    }
}