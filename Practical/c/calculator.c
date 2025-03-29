#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main() {
    float a, b, c;
    int choice;
    
    while (1) {
        printf("\nEnter value for a: ");
        scanf("%f", &a);
        printf("Enter value for b: ");
        scanf("%f", &b);
        
        printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus\n6. Power (a^b)\n7. Square root of a\n0. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        
        if (choice == 0) break;
        
        switch (choice) {
            case 1: c = a + b; printf("Result: %.2f\n", c); break;
            case 2: c = a - b; printf("Result: %.2f\n", c); break;
            case 3: c = a * b; printf("Result: %.2f\n", c); break;
            case 4: 
                if (b != 0) {
                    c = a / b; 
                    printf("Result: %.2f\n", c);
                } else {
                    printf("Error: Division by zero!\n");
                }
                break;
            case 5: 
                if ((int)b != 0) {
                    printf("Result: %d\n", (int)a % (int)b);
                } else {
                    printf("Error: Modulus by zero!\n");
                }
                break;
            case 6: c = pow(a, b); printf("Result: %.2f\n", c); break;
            case 7: 
                if (a >= 0) {
                    printf("Square root of a: %.2f\n", sqrt(a));
                } else {
                    printf("Error: Square root of a negative number is not real!\n");
                }
                break;
            default: printf("Invalid Input !!!\n");
        }
        
        printf("\nPress Enter to continue...");
        while (getchar() != '\n'); // Clear input buffer
        getchar(); // Wait for Enter key
        system("cls"); // Clear terminal (for Windows, use "clear" for Linux/macOS)
    }
}

// #include <stdio.h>

// void main() {
//     float a, b, c;
//     int choice;
    
//     while (1) {
//         printf("\nEnter value for a: ");
//         scanf("%f", &a);
//         printf("Enter value for b: ");
//         scanf("%f", &b);
        
//         printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n0. Exit\nEnter your choice: ");
//         scanf("%d", &choice);
        
//         if (choice == 0) break;
        
//         switch (choice) {
//             case 1: c = a + b; printf("Result: %.2f\n", c); break;
//             case 2: c = a - b; printf("Result: %.2f\n", c); break;
//             case 3: c = a * b; printf("Result: %.2f\n", c); break;
//             case 4: 
//                 if (b != 0) {
//                     c = a / b; 
//                     printf("Result: %.2f\n", c);
//                 } else {
//                     printf("Error: Division by zero!\n");
//                 }
//                 break;
//             default: printf("Invalid Input !!!\n");
//         }
//     }
// }


// #include <stdio.h>
// void main()
// {
//     float a, b, c = 0;
//     float add, sub, mul, div;

//     while (1)
//     {
//     printf("\n\nEnter value for a: ");
//     scanf("%f", &a);
//     printf("\nEnter value for b ");
//     scanf("%f", &b);

//     printf("ENTER YOUR CHOICE: \n For Addition press 1\n For subtraction press 2\n For Multiplication press 3\n For Division press 4\n");


//     int choice;
//     scanf("%d", &choice);
//     int x=1;

//     switch (choice)
//     {
//     case 1:
//     {
//         c = a+b;
//         printf("Addition is: %f", c);
//     }
//         break;

//     case 2:
//     {
//         c = a-b;
//         printf("Substraction is: %f", c);
//     }
//         break;

//     case 3:
//     {
//         c = a*b;
//         printf("Multiplication is: %f", c);
//     }
//         break;

//     case 4:
//     {
//         c = a/b;
//         printf("Division is: %f", c);
//     }
//         break;
//         case 0:{
//         return;
//     }
            
    
    
//     default:
//         printf("Invalid Input !!!");
//         break;
//     }
    

// }
// }