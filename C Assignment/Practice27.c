#include<stdio.h>
void main(){
    char a[20];
    int k=1,d=0,c;
    printf("Enter the String\n");
    gets(a);
     printf("the String is\n");
    puts(a);
    printf("Enter the numbers after required as capital\n");
    scanf("%d",&c);
    for (int i=0;a[i]!='\0';i++ ){
          d++;
    }
    if(c>d){
        printf("Out of bound");

    }else{
    for (int i=0;a[i]!='\0';i++ ){
        if(a[i]!=' '){
        if(k%c!=0){
            if(a[i]>=65 && a[i]<=90){
                a[i]+=32; 
              }  k++;    
        }
        else{
            if (a[i]>=97 && a[i]<=122){
                a[i]-=32;
            }
            k++;
        }
}
    }
    printf("The New String after alteration is\n");
    puts(a);
}
}
    