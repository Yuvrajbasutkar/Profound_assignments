// 3. WAP to find greatest and smallest number in an array.
#include <stdio.h>
void main(){
    int a[10];
    printf("Enter the Arrray\n");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    int lr=a[0];
    int sm=a[0];
    for(int i=0;i<10;i++){
            if(sm>a[i]){
             sm=a[i];  
        }
    }
    for(int i=0;i<10;i++){
        if(lr<a[i]){
         lr=a[i];  
    }
}
    printf("greatest number is %d and smallest number is %d",lr,sm);

}
