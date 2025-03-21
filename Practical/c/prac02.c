// #include<stdio.h>
//  void main(){
//     int *prt;
//     int a=50;
//     prt =&a;
//     printf("the address of a is %d\n", &a);
//     printf("the address of pointer is %u\n", prt);
//     printf("the value in a is %d\n",a);
//     printf("the value refered by prt is %d\n", *prt);
//  }

// OUTPUT

// the address of a is 6291140
// the address of pointer is 6291140
// the value in a is 50
// the value refered by prt is 50

// #include<stdio.h>
//  void main(){
//     int *prt;
//     int **s;
//     int a=50;
//     prt =&a;
//     s = &prt;
//     printf("the address of a is %d\n", &a);
//     printf("the address of pointer is %d\n", **s);
//     printf("the value in a is %d\n",a);
//     printf("the value refered by prt is %d\n", *prt);
// }

// OUTPUT
// the address of a is 6291132
// the address of pointer is 50
// the value in a is 50
// the value refered by prt is 50

#include<stdio.h>
 void main(){
    int *prt;
    int a=50;
    prt =&a;
    prt--;
    printf("the address of a is %u\n", &a);
    printf("the address of pointer is %u\n", prt);
    printf("the value in a is %d\n",a);
    printf("the value refered by prt is %d\n", *prt);
 }
