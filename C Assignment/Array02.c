// WAP to sort array in ascending order.
#include <stdio.h>
void main(){
    int a[10];
    printf("Enter the Arrray\n");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<10;i++){
        for (int j=i+1;j<10;j++){
            if(a[i]>a[j]){
              int temp=a[i];
              a[i]=a[j];
              a[j]=temp;
            }
        }
    }
    printf("The array in sorted in ascending as\n");
    for(int i=0;i<10;i++){
       printf("%d\t",a[i]);
    }
}