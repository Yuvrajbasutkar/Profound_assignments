// 5. WAP to check whether a number is palindrome.
#include <stdio.h>
int pal(int);
void main(){
    int a,c;
    printf("Enter the number=");
    scanf("%d",&a);
    c=pal(a);
    if(a==c){
        printf("The number %d is palindrome",a);

    }else{
        printf("The number %d is not palindrome",a);
    }
}
int pal(int a){
    int b=0;
    while(a>0){
        b=b*10+a%10;
        a/=10;
    }
    return b;
}
