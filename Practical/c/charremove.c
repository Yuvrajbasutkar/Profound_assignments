// #include <stdio.h>
// void main(){
//     char a[20],b,r[20];
//     int k=0;
//     printf("Enter the string\n");
//     gets(a);
//     printf("The String is\n");
//     puts(a);
//     printf("Enter the char to be removed\n");
//     scanf("%c",&b);
//     for (int i=0;a[i]!='\0';i++){
//         if(a[i]!=b){
//             r[k]=a[i];
//             k++;
//         }
//     }r[k]='\0';
//     printf("The String after alteration is\n");
//     puts (r);
// }

#include <stdio.h>

int main() {
    char a[20], b, r[20];
    int k = 0;

    printf("Enter the string: ");
    fgets(a, sizeof(a), stdin);

    printf("The String is: ");
    puts(a);

    printf("Enter the char to be removed: ");
    scanf(" %c", &b);  // Added space before %c to handle newline

    for (int i = 0; a[i] != '\0'; i++) {
        if (a[i] != b) {
            r[k] = a[i];
            k++;
        }
    }
    
    r[k] = '\0'; // Null-terminate the modified string

    printf("The String after alteration is: ");
    puts(r);

    return 0;
}
