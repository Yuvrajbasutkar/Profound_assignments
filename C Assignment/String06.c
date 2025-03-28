// 6. WAP to check a string is palindrome.(Example Wow,bob,radar,sagas..etc)
#include<stdio.h>
void main(){
    char a[10],b[10];
    int len=0,j=0,temp=0;
    printf("Enter the String\n");
    scanf("%s",a);
    printf("the String is %s\n",a);
    for(int i=0;a[i]!='\0';i++){
        len++;
    }
    for(int i=len-1;i>=0;i--){
        b[j]=a[i];
        j++;
    }
    b[j]='\0';
    for(int i=0;a[i]!='\0';i++){
        if(a[i]==b[i]){
            temp=0;
        }else{
            temp=1;
        }
    }
    if(temp==0){
        printf("The Sting is Palindrome\n");
    }else{
        printf("The String is not palindrome\n");
    }

}