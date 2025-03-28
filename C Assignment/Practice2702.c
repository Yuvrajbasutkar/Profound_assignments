#include <stdio.h>
void main(){
    char a[20],b,r[20];
    int k=0;
    printf("Enter the string\n");
    gets(a);
    printf("The String is\n");
    puts(a);
    printf("Enter the char to be removed\n");
    scanf("%c",&b);
    for (int i=0;a[i]!='\0';i++){
        if(a[i]!=b){
            r[k]=a[i];
            k++;
        }
        // do{
        //     continue;
        // }while(a[i]!=b);
        // a[i]=a[i+1];
        }
    r[k]='\0';
    printf("The String after alteration is\n");
    puts(r);
}


