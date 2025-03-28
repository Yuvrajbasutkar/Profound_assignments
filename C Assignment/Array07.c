// Write a program to search particular value in an array and return the index number where itis located.
#include <stdio.h>
void main(){
    int n,m;
    printf("Enter the Value of Row and Col=");
    scanf("%d%d",&n,&m);
    int a[n][m],b;

    printf("Enter the Value of Matrix\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter the number to be searched=");
    scanf("%d",&b);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==b){
                printf("the number is present in array at indices i=%d and j=%d",i,j);
            }
        }
    }
}