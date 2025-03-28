// 14. Sort array using bubble sort
#include <stdio.h>
void main(){
    int n,l=0;
    printf("Enter the number of elements in array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements in array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("The elements in array\n");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    for(int j=0;j<n;j++){
    for(int i=0;i<=n-j;i++){
        if(a[i]>a[i+1]){
           int temp =a[i];
           a[i]=a[i+1];
           a[i+1]=temp;
        }
    }}
    printf("\nThe elements in array after swapping\n");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}