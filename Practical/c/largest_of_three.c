#include<stdio.h>

int main() {
    int a,b,c;

    printf("Enter First Number: ");
    scanf("%d", &a);
    printf("Enter Second Number: ");
    scanf("%d", &b);
    printf("Enter Third Number: ");
    scanf("%d", &c);

    if(a > b && a > c)
        printf("The greatest of three number is %d\n",a);
    else if(b > a && b >c)
        printf("The greatest of three number is %d\n",b);
    else
        printf("The greatest of three number is %d\n",c);

    return 0;

}



















// #include <stdio.h>
// int main() {
//     int a, b, c;
//     printf("Enter three numbers: ");
//     scanf("%d %d %d", &a, &b, &c);
    
//     if (a > b && a > c)
//         printf("%d is the largest\n", a);
//     else if (b > a && b > c)
//         printf("%d is the largest\n", b);
//     else
//         printf("%d is the largest\n", c);
    
//     return 0;
// }
