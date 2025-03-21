#include <stdio.h>

int add(int a, int b);
int add1();
void add2(int x, int y);
void add3();
void main(){
    int a,b,c=0;
    printf("Enter the numbers=");
    scanf("%d%d",&a,&b);
    c=add(a,b);
    printf("The parmetized output with return type is %d\n",c);
    c=add1();
    printf("The non parametrized with return type output is %d\n",c);
    add2(a,b);
    add3();

}
int add(int a, int b){
    int sum=0;
    sum=a+b;
    return sum;
}
int add1(){
    int a,b;
    printf("Enter the numbers=");
    scanf("%d%d",&a,&b);
    return a+b;
}
void add2(int a, int b){
    printf("The parametrized with no return type output is %d\n",a+b);

}
void add3(){
    int a,b;
    printf("Enter the numbers=");
    scanf("%d%d",&a,&b);
    printf("The non parametrized with no return type output is %d\n",a+b);
}