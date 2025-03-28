// 4. WAP to check whether a number is Armstrong number.

#include<stdio.h>
#include <math.h>
int count(int);
void Arm(int,int);
void main(){
    int a,c=0;
    printf("Enter the number=");
    scanf("%d",&a);
    int f=count(a);
    Arm(a,f);
    
}
int count(int a){
    int b=0;
    while(a>0){
        a=a/10;
        b++;
    }
    return b;
}
void Arm(int a,int b){
    int c=0;
    int e=a;
    while(a>0){
        c=c+pow(a%10,b);
        a=a/10;
    }
    if(c==e){
        printf("The number %d is Armstrong number",c);
    }else{
        printf("The number %d is not Armstrong number",c);
    }

}