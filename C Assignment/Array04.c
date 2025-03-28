// WAP to find transpose of matrix
#include <stdio.h>
void main(){
    int n,m;
    printf("Enter the Value of Row and Col=");
    scanf("%d%d",&n,&m);
    int a[n][m];
    int b[m][n];
    printf("Enter the Value of Matrix\n");

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("The Original Matrix\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           printf("%d\t  ",a[i][j]);
        }printf("\n");
    }
    for(int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            b[i][j]=a[j][i];
        }
    }
    printf("The transpose of Original Matrix\n");

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           printf("%d\t",b[i][j]);
        }printf("\n");
    }

}