// #include<stdio.h>

// int i, j;

// void main() {

//     for (i=1;i<=4;i++) {
//         for (j=5; j>=1;j--) {
//             printf("%d  %d",i,j);
//         }
//         printf("\n");
//     }
// }

#include <stdio.h>

int main() {
    int i, j;
    for (i = 1, j = 5; i <= 5 && j >= 1; i++, j--) {
        if (i == 3)  // Skipping when i == 3 to match the given pattern
            continue;
        printf("%d %d\n", i, j);
    }
    return 0;
}
