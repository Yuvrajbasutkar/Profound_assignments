// 12. Given a 2D array, print it in spiral form.
// I/p 1 2 3 4 5
// 6 7 8 9 10
// 11 12 13 14 15
// O/p 1 2 3 4 5 10 15 14 13 12 11 6 7 8 9
#include<stdio.h>
void main(){
    int a[3][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
    printf("2D array print it in spiral form.\n");
    for(int i=0;i<5;i++){
        printf("%d\t",a[0][i]);
    }
    printf("%d\t",a[1][4]);
    for(int i=4;i>=0;i--){
        printf("%d\t",a[2][i]);
    }
    for(int i=0;i<4;i++){
        printf("%d\t",a[1][i]);
    }

}