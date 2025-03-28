// 4. Find a character(or sub-string) in a string without using library function. And print its ascii value
#include <stdio.h>
void main(){
    char a[10],b[10];
    int j=0,k=0;
    printf("Enter first String\n");
    scanf("%s",a);
    printf("Enter the Sub-String need to be found=");
    scanf("%s",b);
    for(int i=0;a[i]!='\0';i++){
        if(a[i]==b[j]){
            j++;
        }
        if(b[j]=='\0'){
            k=1;
            break;
        }
    }
    if(k==1){
        printf("The Sub-String is present in the String\n");
        for(int i=0;b[i]!='\0';i++){
        printf("the ascii value of substring charachter %c is %d\n",b[i],b[i]);
        }
    }else{
        printf("The Sub-String is not present in the String\n");
    }
}