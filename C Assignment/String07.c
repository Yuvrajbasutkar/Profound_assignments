// WAP to count no of blank spaces in your paragraph without using string function and write it in your own function.
#include<stdio.h>
void main(){
    char a[20];
    int count=0;
    printf("Enter the String\n");
    gets(a);
    printf("the String is %s\n",a);
    for(int i=0;a[i]!='\0';i++){
        if(a[i]==' '){
            count++;
        }
    }
    printf("The count of Spaces in String is %d",count);
}