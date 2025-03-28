// WAP to convert alternate characters of the string to uppercase.The first letter of the string
// has to be capital.
// I/p: We are the world
// O/p: We ArE tHe WoRlD
#include<stdio.h>
void main(){
    char a[20];
    int k=1;
    printf("Enter the String\n");
    gets(a);
     printf("the String is\n");
    puts(a);
    for (int i=0;a[i]!='\0';i++ ){
        if(a[i]!=' '){
        if(k%2==0){
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
    printf("The New Strinf after alteration is\n");
    puts(a);


}