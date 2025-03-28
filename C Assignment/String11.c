// 11. WAP to transform string of lowercase character by replacing each letter with subsequent character.
#include<stdio.h>
int main(){
    char a[20];
    int i;
    printf("Enter the String\n");
    gets(a);
    printf("the String is\n");
    puts(a);
    for(i=0;a[i]!='\0';i++){
           a[i]+=1;
    }a[i]='\0';
printf("the String after operation is\n");
    puts(a);
}