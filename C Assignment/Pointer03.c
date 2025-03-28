// 3. Demonstrate pointer arithmetic by assigning pointer “ptr” to variable “a” which is
// having value as 100 in it.Perform increment operation on pointer ptr like ptr=ptr+2 and
// display which address that pointer ptr hold.
#include<stdio.h>
void main(){
    int a=100;
    int*ptr=&a;
    printf("Address at ptr before increment=%d\n ",ptr);
    ptr+=2;
    printf("Address at ptr after increment=%d",ptr);
}