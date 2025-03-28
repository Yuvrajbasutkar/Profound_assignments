#include<stdio.h>
void main(){
    char a[20];
    printf("Enter the string\n");
    gets(a);
    printf("The String is\n");
    puts(a);
    for(int i=0;a[i]!='\0';i++){
        if(a[i]==' '){continue;}
        else{
        if(a[i]>=65 && a[i]<=90){
            a[i]+=32;
        }
        else{
            a[i]-=32;
        }
    }
    }
    printf("The String after alteration is\n");
    puts(a);
}