// 1. Write a program that declares a double, an int, and char variables. Next declare and initialize a
// pointer to each of the three variables. Your program should then print the address of, and value
// stored in.
#include<stdio.h>
int main(){
    int a=10;
    double b=100;
    char c='c';
    int * d;
    double *e;
    char * f;
    d=&a;
    e=&b;
    f=&c;
    printf("Address of a %u\n",&a);
    printf("value stored at d is %u\n",d);
    printf("Address of d is %u\n",&b);
    printf("value stored at d is %u\n",e);
    printf("Address of d is %u\n",&c);
    printf("value stored at d is %u\n",f);
    return 0;

}
