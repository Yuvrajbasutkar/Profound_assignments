// 2. WAP to concatenate two strings without using library function.
#include<stdio.h>
void main(){
    char a[30];
    char b[10];
    int i=0;
    printf("Enter first String\n");
    scanf("%s",a);
    printf("Enter second String\n");
   scanf("%s",b);
    do{
        i++;
    }while(a[i]!='\0');
    for(int j=0;b[j]!='\0';j++){
        a[i]=b[j];
        i++;
    }
    a[i]='\0';
    printf("Concatenation of Two Strings\n");
 printf("%s",a);


}