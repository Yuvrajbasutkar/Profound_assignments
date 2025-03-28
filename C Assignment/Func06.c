// 6. WAP to find HCF and LCM of given number using recursion.
#include<stdio.h>
int hcf(int,int);
int lcm(int,int);
int main(){
    int a,b;
    printf("Enter the Two Numbers=");
    scanf("%d%d",&a,&b);
    printf("The HCF is %d\n",hcf(a,b));
    printf("The lcm is %d",lcm(a,b));


    return 0;
}
int hcf(int a,int b){
    if(a<b){
    for(int i=a;i>1;i--){
        if(a%i==0 && b%i==0){
            return i;
            break;
        }}
    }else{
        for(int i=b;i>1;i--){
            if(a%i==0 && b%i==0){
                return i;
                break;
            }
    }
}
}
int lcm(int a,int b){
    return (a * b) / hcf(a, b);
}