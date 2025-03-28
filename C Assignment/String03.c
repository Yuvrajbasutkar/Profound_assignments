// 3. WAP to convert upper-case string into lower-case and vice versa .Write your own functions for the same.
#include<stdio.h>
void main(){
    char a[10];
    printf("Enter the String\n");
    scanf("%s",a);
    printf("the String is %s\n",a);
    for(int i=0;i<10;i++){
        if(a[i]>=65 && a[i]<=90){
            a[i]+=32;        }
    else if (a[i]>=97 && a[i]<=122){
        a[i]-=32;
    }
}
    printf("the String after operation is %s\n",a);

}