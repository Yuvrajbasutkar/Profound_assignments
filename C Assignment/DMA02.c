// 2. Write a program to input and print text using Dynamic Memory Allocation.
#include<stdio.h>
#include<stdlib.h>
void  main(){
    char *p;
    p=(char*)malloc(10*sizeof(char));
    printf("Enter the Text\n");
    scanf("%s",p);
    printf("The text is %s",p);
}