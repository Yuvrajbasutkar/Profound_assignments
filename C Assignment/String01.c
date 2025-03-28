// 1. WAP to compare two strings using strcmp ().
#include <stdio.h>
#include<string.h>
void main (){
    char a[10],b[10];
    int r;
    printf("Enter first String\n");
    scanf("%s",a);
    printf("Enter second String\n");
    scanf("%s",b);
    r=strcmp(a,b);
    if(r==0){
        printf("Strings are Equal\n");
    }else{
        printf("Strings are not Equal\n");
    }
}