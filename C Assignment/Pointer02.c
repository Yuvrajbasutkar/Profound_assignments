// 2. Demonstrate addition of two floating type numbers by using call by address.
#include<stdio.h>
void add(int*,int*);
void main(){
    int a,b;
    // int* c=&a;
    // int* d=&b;
    printf("Enter the numbers=");
     scanf("%d%d",&a,&b);
     int* c=&a;
     int* d=&b;
    printf("The Value of A before addition=%d\n ",a);
    add(c,d);

}
void add(int * c,int* d){
    *c=*c+*d;
    printf("The Value of A after addition=%d",*c);
}