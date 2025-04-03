
// Topic : Basic Programs ---------------------------------------------- 

// // 1. Write a program to print Hello World on output screen
// #include <stdio.h>

// int main() {
//     printf("Hello World");
//     return 0;
// }

// // 2. WAP to calculate Simple interest.
// // S.I. = (Principle × Rate of interest per annum × Time in year)/100  

// int main(){
//     float p,r,t;
//     printf("Enter the principle ammount: ");
//     scanf("%f",&p);
//     printf("Enter the Rate of interest per annum: ");
//     scanf("%f",&r);
//     printf("Enter the Time in year: ");
//     scanf("%f",&t);
//     float si = (p*r*t)/100;
//     printf("The Simple Interest will be: %.2f",si);
//     return 0;
// }

// // 3. WAP to find out perimeter and area of the Square and Rectangle

// void square(){
//     float area, perimeter, side;
//     printf("Enter length of side of square: ");
//     scanf("%f",&side);
//     area = side * side;
//     perimeter = 4 * side;
//     printf("\nArea of square is: %.2f", area);
//     printf("\nPerimeter of square is: %.2f", perimeter);
// }
// void rectangle(){
//     float area, perimeter, length, width;
//     printf("Enter length of rectangle: ");
//     scanf("%f",&length);
//     printf("Enter width of rectangle: ");
//     scanf("%f",&width);
//     area = length * width;
//     perimeter = 2 * (length + width);
//     printf("\nArea of rectangle is: %.2f", area);
//     printf("\nPerimeter of rectangle is: %.2f", perimeter);
// }
// int main(){
//     int choice;
//     do {
//         printf("\n\nChoose an option:\n1. Square\n2. Rectangle\n3. Exit\nEnter your choice: ");
//         scanf("%d", &choice);
//         switch (choice) {
//             case 1:
//                 square();
//                 break;
//             case 2:
//                 rectangle();
//                 break;
//             case 3:
//                 printf("Exiting the program.\n");
//                 break;
//             default:
//                 printf("Invalid choice! Please try again.\n");
//         }
//     } while (choice != 3);

//     return 0;
// }

// // 4. WAP to convert Fahrenheit temp in degree Celsius.
// // F = ((9*C) / 5) + 32
// // C = ( (F - 32) * 5 ) / 9

// int main(){
//     float F,C;
//     printf("Enter the Fahrenheit temperature: ");
//     scanf("%f",&F);
//     C = ( (F - 32) * 5 ) / 9;
//     printf("The Degree Celsius temperature is: %.2f degree celsius", C);
//     return 0;
// }

// // 5. WAP to demonstrate arithmetic operation on two integer number

// int main(){
//     int num1,num2, choice;
//     do {
//         printf("\n\nEnter the first integer: ");
//         scanf("%d",&num1);
//         printf("Enter the second integer: ");
//         scanf("%d",&num2);
//         printf("\nChoices:\n1. Add\n2. Sub\n3. Multiply\n4. Divide\n5. Exit\n   Enter your choice: ");
//         scanf("%d",&choice);
//         switch(choice){
//             case 1:
//                 printf("Addition is: %d", num1 + num2);
//                 break;
//             case 2:
//                 printf("Substraction is: %d", num1 - num2);
//                 break;
//             case 3:
//                 printf("Multiplication is: %d", num1 * num2);
//                 break;
//             case 4:
//                 printf("Division is: %d", num1 / num2);
//                 break;
//             case 5:
//                 printf("Exiting the program.\n");
//                 break;
//             default:
//                 printf("Invalid choice! Please try again.\n");
//         }
//     }while(choice != 5);
//     return 0;
// }

// //  6. Write a program which will accept three integer numbers from user and find out greatest among them using conditional operator

// int main() {
//     int a,b,c;
//     printf("Enter first numbers: ");
//     scanf("%d",&a);
//     printf("Enter second numbers: ");
//     scanf("%d",&b);
//     printf("Enter third numbers: ");
//     scanf("%d",&c);
//     if(a > b && a > c){
//         printf("%d is greater than all",a);
//     } else if(b > a && b > c){
//         printf("%d is greater than all",b);
//     } else if(c > a && c > b){
//         printf("%d is greater than all",c);
//     } else if(a == b && b==c){
//         printf("All are equale");
//     }
//     return 0;
// }

// // 7. Accept two numbers and perform swapping with third variable, and without third variable 
// // with third variable
// #include <stdio.h>

// int main() {
//     int a,b;
//     printf("Enter first numbers: ");
//     scanf("%d",&a);
//     printf("Enter second numbers: ");
//     scanf("%d",&b);
//     printf("\nNumber before Swapping are num1 = %d , num2 = %d", a,b);
//     int c = a;
//     a = b;
//     b = c;
//     printf("\nNumber after Swapping are num1 = %d , num2 = %d", a,b);
//     return 0;
// }

// // without third variable
// #include <stdio.h>

// int main() {
//     int a,b;
//     printf("Enter first numbers: ");
//     scanf("%d",&a);
//     printf("Enter second numbers: ");
//     scanf("%d",&b);
//     printf("\nNumber before Swapping are num1 = %d , num2 = %d", a,b);
//     a = a + b;
//     b = a - b;
//     a = a - b;
//     printf("\nNumber after Swapping are num1 = %d , num2 = %d", a,b);
//     return 0;
// }

// // 8. WAP to accept five subject marks and find out total and average of the marks.

// #include <stdio.h>

// int main() {
//     int marks[5], total = 0, avg = 1;
//     for(int i = 0; i < 5; i++){
//         printf("Enter marks of subject %d : ",i+1);
//         scanf("%d",&marks[i]);
//         total += marks[i];
//         avg = total / (i+1);
//     }
//     printf("Total marks are : %d",total);
//     printf("\nAverage marks are : %d",avg);

//     return 0;
// }


// // 9. WAP which calculate speed for time and distance.
// //      Speed=(distance/time)

// #include <stdio.h>

// int main() {
//     float times,distance;
//     printf("Enter the time in seconds: ");
//     scanf("%d",&times);
//     printf("Enter the distance in meter: ");
//     scanf("%d",&distance);
//     float speed = distance / times;
//     printf("Speed is: %.2f",speed);

//     return 0;
// }

// // 10. Command line program to find area of triangle
// #include <stdio.h>
// #include <stdlib.h>

// int main(int argc, char *argv[]) {
//     // Check if the user provided required arguments
//     if (argc != 3) {
//         printf("Usage: %s <base> <height>\n", argv[0]);
//         return 1;
//     }

//     // Convert command line arguments from string to float
//     float base = atof(argv[1]);
//     float height = atof(argv[2]);

//     // Calculate area of the triangle
//     float area = 0.5 * base * height;

//     // Display result
//     printf("The area of the triangle with base %.2f and height %.2f is: %.2f\n", base, height, area);

//     return 0;
// }


//  ---------------------------------------------- Topic : Selection statement ---------------------------------------------- 


// // 1. WAP to check whether a number is even or odd

// #include <stdio.h>

// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     if(num % 2 == 0){
//         printf("Given number %d is an even number.", num);
//     }else {
//         printf("Given number %d is a odd number.", num);
//     }

//     return 0;
// }

// // 2 . WAP to check whether a person is eligible for voting or not.

// #include <stdio.h>
// int main() {
//     int age;
//     printf("Enter the age of person: ");
//     scanf("%d",&age);
//     if(age >= 18){
//         printf("The person can vote.");
//     }else {
//         printf("The person can not vote.");
//     }

//     return 0;
// }

// // 3. WAP to accept Cost Price from user and ask whether the user is a student or not. If the user is student and cost price is greater than 500, give discount of 10% ELSE discount will be 5%. If user is not student and cost price is greater 500 then give discount of 8% ELSE discount will be 2%. (Take all inputs from USER)

// #include <stdio.h>

// void discount(float discount_val, int amount){
//     float discount_amount = amount - (amount * (discount_val / 100));
//     printf("Your final paying cost will be : %.3f/- .", discount_amount);
//     printf("\nYou have got %.0f%% discount.", discount_val);
// }

// int main() {
//     int cost_price;
//     char choice;
    
//     printf("Enter the cost price: ");
//     scanf("%d", &cost_price);

//     printf("Are you a student (Y/N): ");
//     scanf(" %c", &choice);

//     if(choice == 'y' || choice == 'Y'){
//         if(cost_price > 500)
//             discount(10, cost_price);
//         else
//             discount(5, cost_price);
//     }
//     else{
//         if(cost_price > 500)
//             discount(8, cost_price);
//         else
//             discount(2, cost_price);
//     }

//     return 0;
// }

// // 4. WAP to check whether Number is positive or negative or ZERO

// #include <stdio.h>
// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     if(num == 0)
//         printf("Your enter value is zero (0).");
//     else if(num < 0)
//         printf("Your enter value is negative (%d).",num);
//     else
//         printf("Your enter value is positive (%d).",num);
// }

// // 5. WAP a program to accept Percentage from user and check the GRADE
//     //  A. Above 70% - Grade A 
//     //  B. Between 60% to 70% - Grade B+. 
//     //  C. Between 45% to 60% - Grade B. 
//     //  D. Between 35% to 45% - Grade C.
//     //  E. Less than 35% - Fail

// #include <stdio.h>
// int main(){
//     float percentage;
//     printf("Enter the percentage of student: ");
//     scanf("%f",&percentage);
//     if(percentage >= 70)
//         printf("The student will get A Geade");
//     else if(percentage >= 60 && percentage < 70)
//         printf("The student will get B+ Geade");
//     else if(percentage >= 45 && percentage < 60)
//         printf("The student will get B Geade");
//     else if(percentage >= 35 && percentage < 45)
//         printf("The student will get C Geade");
//     else if(percentage < 35)
//         printf("The student is fail");
// }

// // 6. Accept three numbers from user and find out largest number among three and also find out whether that three numbers are equal or not.(else if ladder)

// #include<stdio.h>
// int main() {
//     int a,b,c;
//     printf("Enter first numbers: ");
//     scanf("%d",&a);
//     printf("Enter second numbers: ");
//     scanf("%d",&b);
//     printf("Enter third numbers: ");
//     scanf("%d",&c);
//     if(a > b && a > c){
//         printf("%d is greater than all",a);
//     } else if(b > a && b > c){
//         printf("%d is greater than all",b);
//     } else if(c > a && c > b){
//         printf("%d is greater than all",c);
//     } else if(a == b && b==c){
//         printf("All are equale");
//     } else if(a == b || a == c || b == c){
//         if(a == b && a > c){
//             printf("First and Second number are equal and are greater.");
//         }
//         else if(a == c && a > b){
//             printf("First and Third number are equal and are greater.");
//         }
//         else{
//             printf("Second and Third number are equal and are greater.");
//         }
//     }
//     return 0;
// }



//  ---------------------------------------------- Topic : Branching statement ---------------------------------------------- 

// // 1. WAP using following menus-
//     //  Choice-1: Accept number and find out square and cube.
//     //  Choice-2: Check whether the given year is LEAP or not. 
//     //  If user enters wrong choice appropriate message should get displayed.
// #include <stdio.h>

// void squareCube(){
//     int num = 0;
//     printf("Enter a number: ");
//     scanf(" %d", &num);
//     printf("The Square of given number (%d) is: %d", num, num*num);
//     printf("\nThe Cube of given number (%d) is: %d", num, num*num*num);
// }
// void isLeap(){
//     int year = 0;
//     printf("Enter the yaer: ");
//     scanf(" %d", &year);
//     if(year%4 == 0){
//         printf("Your enter year (%d) is a LEAP year.",year);
//     } else {
//         printf("Your enter year (%d) is not a LEAP year.", year);
//     }
// }
// #include<stdio.h>
// int main(){
//     int choice;
//     printf("1. Accept number and find out square and cube of it.");
//     printf("\n2. Check whether the given year is LEAP or not.");
//     printf("\nEnter your choice (1,2): ");
//     scanf("%d",&choice);
//     switch(choice){
//         case 1:
//             squareCube();
//             break;
//         case 2:
//             isLeap();
//             break;
//         default:
//             printf("Enter a valid choice");
//             break;
//     }
//     return 0;
// }

// // 2. WAP using switch case for arithmetic operation on two numbers, if user enters an operator as choice, the appropriate operation should perform.If user enters wrong choice appropriate message should get displayed.
//     //  i.e. + is for addition
//     //       - is for subtraction

// #include <stdio.h>
// int main(){
//     int a, b;
//     char choice;
//     printf("Enter 2 numbers: ");
//     scanf(" %d %d",&a,&b);
//     printf("Enter the operator (+,-,*,/,%): ");
//     scanf(" %c", &choice);
//     switch(choice){
//         case '+':
//             printf("The addition is: %d",a+b);
//             break;
//         case '-':
//             printf("The Substraction is: %d",a-b);
//             break;
//         case '*':
//             printf("The Multiplication is: %d",a*b);
//             break;
//         case '/':
//             printf("The Division is: %d",a/b);
//             break;
//         case '%':
//             printf("The reminder is: %d",a%b);
//             break;
//         default:
//             printf("Please enter a valid choice!!!");
//             break;
//     }
//     return 0;
// }



//  ---------------------------------------------- Topic : Looping statements ---------------------------------------------- 
 

// // 1. WAP to check whether a number is prime or not.

// #include <stdio.h>
// void isPrime(int num){
//     int result = 0;
//     for(int i = 1;i <=num; i++){
//         if(num % i == 0){
//             result++;
//         }
//         if(result > 2){
//             break;
//         }
//     }
//     if(result == 2){
//         printf("Your entered number (%d) is a prime number.");
//     } else {
//         printf("Your entered number (%d) is not a prime number.");
//     }
// }

// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf(" %d", &num);
//     if(num < 0){
//         printf("Please enter a positive number. \nPrime numbers are not in negative.");
//     } else {
//         isPrime(num);
//     }
//     return 0;
// }

// // 2. WAP to accept a number from user and find out sum of even digits from that given number.

// #include <stdio.h>

// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf(" %d",&num);
//     int sum = 0;
//     for(int i = 1; i <= num; i++){
//         if(i % 2 == 0){
//             sum += i;
//         }
//     }
//     printf("The sum is: %d",sum);
//     return 0;
// }

// // 3. WAP to print the following pattern :   remain to complete
// //          * 
// //         ***
// //        *****
// //       *******
// //      *********

// #include <stdio.h> 
// int main(){
//     for (int i = 0; i<5;i++){
//             for (int j = 0; j<=i;j++){
//             if(i==0){
//                 printf("*");
//             }
//             if(i>0){
//                 printf("*");
//             }
//         }
//         printf("\n");
//         }
// }


// // 4. WAP to print the following on output screen using jumping statements 
 
// //  1 5
// //  2 4
// //  4 2
// //  5 1

// #include <stdio.h>
// int main(){
//     for(int i = 0;i<5; i++){
//         printf("%d\t%d\n",i+1,5-i);
//     }
//     return 0;
// }

// // 5. WAP to print 
// // 1 1 1 2
// // 3 2 2 2 
// // 3 3 3 4

// #include <stdio.h>
// int main(){
//     int row = 6;
//     int i,j;
//     int digit = 1,count=0;
//     for(i=0;i<row;i++){
//         for(j=1;j<=4;j++){
//             if(i%2 == 0){
//                 if(count > 2){
//                     digit++;
//                     printf("%d ", digit);
//                     count = 0;
//                 }
//                 else{
//                     printf("%d ", digit);
//                     count++;
//                 }
//             }
//             else{
//                 if(count==0){
//                     printf("%d ", digit+1);
//                     count++;
//                 }else if (count>=1 && count <= 3){
//                     printf("%d ", digit);
//                     count++;
//                     if(count == 4){
//                         digit++;
//                         count = 0;
//                     }
//                 }
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// // 6. GCD of three numbers
// #include <stdio.h>

// int main() {
//     int a,b,c;
//     printf("Enter 3 numbers: ");
//     scanf("%d %d %d",&a,&b,&c);
//     int min;
//     if(a > b && a > c)
//         min = a;
//     else if (b > a && b > c)
//         min = b;
//     else
//         min = c;
//     for(int i = min; i > 0; i--){
//         if((a % i == 0) && (b % i == 0) && (c % i == 0)){
//             printf("GCD is : %d",i);
//             break;
//         }
//     }

//     return 0;
// }

// // 7. Find all pythagorean triplet below the given limit. 
// #include <stdio.h>
// #include <math.h>
// int main() {
//     int limit;
//     printf("Enter the limit: ");
//     scanf("%d",&limit);
//     printf("Pythagorean triplet up to limit %d are:\n",limit);
//     for(int i = 1; i <= limit; i++){
//         for(int j = i+1; j <= limit; j++){
//             double c = sqrt(i * i + j * j);
//             if (c == (int)c && c <= limit) {  // Check if `c` is an integer
//                 printf("%d %d %d\n", i, j, (int)c);
//             }
//         }
//     }
//     return 0;
// }


// // 9. WAP to convert decimal to binary /binary to octal 
// #include <stdio.h>
// #include <math.h>

// // Function to convert decimal to binary
// void decimalToBinary(int num) {
//     int binary[32], i = 0;

//     if (num == 0) {
//         printf("Binary: 0\n");
//         return;
//     }

//     while (num > 0) {
//         binary[i++] = num % 2;
//         num /= 2;
//     }

//     printf("Binary: ");
//     for (int j = i - 1; j >= 0; j--) {
//         printf("%d", binary[j]);
//     }
//     printf("\n");
// }

// // Function to convert binary to octal
// void binaryToOctal(long long binary) {
//     int decimal = 0, octal = 0, i = 0;

//     // Convert binary to decimal
//     while (binary != 0) {
//         decimal += (binary % 10) * pow(2, i);
//         binary /= 10;
//         i++;
//     }

//     i = 1;
//     // Convert decimal to octal
//     while (decimal != 0) {
//         octal += (decimal % 8) * i;
//         decimal /= 8;
//         i *= 10;
//     }

//     printf("Octal: %d\n", octal);
// }

// int main() {
//     int choice, num;
//     long long binary;

//     printf("Choose an option:\n");
//     printf("1. Decimal to Binary\n");
//     printf("2. Binary to Octal\n");
//     scanf("%d", &choice);

//     if (choice == 1) {
//         printf("Enter a decimal number: ");
//         scanf("%d", &num);
//         decimalToBinary(num);
//     } else if (choice == 2) {
//         printf("Enter a binary number: ");
//         scanf("%lld", &binary);
//         binaryToOctal(binary);
//     } else {
//         printf("Invalid choice!\n");
//     }

//     return 0;
// }



// -------------------------------------------------   Topic: Functions     ------------------------------------------------- 


// // 1. WAP to demonstrate all four categories of functions for volume of the cylinder
// //  (volume of cylinder: 3.14*r*r*h)
// //  a) Function without parameters without return value.
// //  b) Function with parameter without return value.
// //  c) Function without parameter with return value.
// //  d) Function with parameters with return value.

// #include <stdio.h>

// // Function without parameters and without return value
// void volumeWithoutParamsNoReturn() {
//     float r, h, volume;
//     printf("Enter radius and height: ");
//     scanf("%f %f", &r, &h);
//     volume = 3.14 * r * r * h;
//     printf("Volume of Cylinder: %.2f\n", volume);
// }

// // Function with parameters and without return value
// void volumeWithParamsNoReturn(float r, float h) {
//     float volume = 3.14 * r * r * h;
//     printf("Volume of Cylinder: %.2f\n", volume);
// }

// // Function without parameters but with return value
// float volumeWithoutParamsWithReturn() {
//     float r, h;
//     printf("Enter radius and height: ");
//     scanf("%f %f", &r, &h);
//     return 3.14 * r * r * h;
// }

// // Function with parameters and with return value
// float volumeWithParamsWithReturn(float r, float h) {
//     return 3.14 * r * r * h;
// }

// int main() {
//     float r, h;

//     printf("\n--- Function without parameters & without return ---\n");
//     volumeWithoutParamsNoReturn();

//     printf("\n--- Function with parameters & without return ---\n");
//     printf("Enter radius and height: ");
//     scanf("%f %f", &r, &h);
//     volumeWithParamsNoReturn(r, h);

//     printf("\n--- Function without parameters & with return ---\n");
//     float vol1 = volumeWithoutParamsWithReturn();
//     printf("Volume of Cylinder: %.2f\n", vol1);

//     printf("\n--- Function with parameters & with return ---\n");
//     printf("Enter radius and height: ");
//     scanf("%f %f", &r, &h);
//     float vol2 = volumeWithParamsWithReturn(r, h);
//     printf("Volume of Cylinder: %.2f\n", vol2);

//     return 0;
// }

// // 2. WAP to calculate factorial of a number using a function. (using recursion) 
// #include <stdio.h>

// // Recursive function to calculate factorial
// long long int factorial(int n) {
//     if (n == 0 || n == 1)
//         return 1; // Base case
//     else
//         return n * factorial(n - 1); // Recursive call
// }

// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     if (num < 0)
//         printf("Factorial is not defined for negative numbers.\n");
//     else
//         printf("Factorial of %d is %lld\n", num, factorial(num));

//     return 0;
// }

// // 3. WAP to print Fibonacci series.(also using recursion) 
// #include <stdio.h>

// // Recursive function to find Fibonacci number
// int fibonacci(int n) {
//     if (n == 0)
//         return 0; // Base case
//     else if (n == 1)
//         return 1; // Base case
//     else
//         return fibonacci(n - 1) + fibonacci(n - 2); // Recursive call
// }

// int main() {
//     int n;
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);

//     printf("Fibonacci Series: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", fibonacci(i));
//     }
//     printf("\n");

//     return 0;
// }

// // 4. WAP to check whether a number is Armstrong number.
// #include <stdio.h>
// #include <math.h>

// // Function to check if a number is an Armstrong number
// int isArmstrong(int num) {
//     int originalNum, remainder, result = 0, n = 0;

//     originalNum = num;

//     // Count the number of digits
//     while (originalNum != 0) {
//         originalNum /= 10;
//         n++;
//     }

//     originalNum = num;

//     // Compute sum of nth power of each digit
//     while (originalNum != 0) {
//         remainder = originalNum % 10;
//         result += pow(remainder, n);
//         originalNum /= 10;
//     }

//     // Check if result matches original number
//     return (result == num);
// }

// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     if (isArmstrong(num))
//         printf("%d is an Armstrong number.\n", num);
//     else
//         printf("%d is not an Armstrong number.\n", num);

//     return 0;
// }

// // 5. WAP to check whether a number is palindrome.
// #include <stdio.h>

// // Function to check if a number is a palindrome
// int isPalindrome(int num) {
//     int originalNum = num, reversedNum = 0, remainder;

//     // Reverse the number
//     while (num != 0) {
//         remainder = num % 10;
//         reversedNum = reversedNum * 10 + remainder;
//         num /= 10;
//     }

//     // Check if original number is equal to reversed number
//     return (originalNum == reversedNum);
// }

// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     if (isPalindrome(num))
//         printf("%d is a palindrome number.\n", num);
//     else
//         printf("%d is not a palindrome number.\n", num);

//     return 0;
// }

// // 6. WAP to find HCF and LCM of given number using recursion
// #include <stdio.h>

// // Recursive function to find HCF (GCD)
// int findHCF(int a, int b) {
//     if (b == 0)
//         return a;
//     return findHCF(b, a % b);
// }

// // Function to find LCM using HCF
// int findLCM(int a, int b) {
//     return (a * b) / findHCF(a, b);
// }

// int main() {
//     int num1, num2;
    
//     // Taking input from user
//     printf("Enter two numbers: ");
//     scanf("%d %d", &num1, &num2);

//     // Calculate HCF
//     int hcf = findHCF(num1, num2);
//     // Calculate LCM
//     int lcm = findLCM(num1, num2);

//     // Output results
//     printf("HCF of %d and %d is: %d\n", num1, num2, hcf);
//     printf("LCM of %d and %d is: %d\n", num1, num2, lcm);

//     return 0;
// }


// -------------------------------------------------   Topic: Pointers     ------------------------------------------------- 

// // 1. Write a program that declares a double, an int, and char variables. Next declare and initialize a pointer to each of the three variables. Your program should then print the address of, and value stored in. 
// #include <stdio.h>

// int main() {
//     // Declare variables
//     double d = 10.5;
//     int i = 25;
//     char c = 'A';

//     // Declare pointers and initialize them
//     double *ptr_d = &d;
//     int *ptr_i = &i;
//     char *ptr_c = &c;

//     // Print addresses and values
//     printf("Variable    Address         Value\n");
//     printf("-----------------------------------\n");
//     printf("Double      %u    %.2lf\n", (void*)ptr_d, *ptr_d);
//     printf("Integer     %u    %d\n", (void*)ptr_i, *ptr_i);
//     printf("Character   %u    %c\n", (void*)ptr_c, *ptr_c);

//     return 0;
// }

// // 2. Demonstrate addition of two floating type numbers by using call by address
// #include <stdio.h>

// // Function to add two float numbers using call by address
// void addFloat(float *num1, float *num2, float *result) {
//     *result = *num1 + *num2;
// }

// int main() {
//     float a, b, sum;

//     // Taking user input
//     printf("Enter two floating-point numbers: ");
//     scanf("%f %f", &a, &b);

//     // Calling the function by passing addresses
//     addFloat(&a, &b, &sum);

//     // Displaying the result
//     printf("Sum = %.2f\n", sum);

//     return 0;
// }

// // 3. Demonstrate pointer arithmetic by assigning pointer “ptr” to variable “a” which is having value as 100 in it.Perform increment operation on pointer ptr like ptr=ptr+2 and display which address that pointer ptr hold.

// #include <stdio.h>
// int main() {
//     int a = 100;
//     int *ptr = &a;  // Assigning pointer to the address of 'a'

//     printf("Initial address stored in ptr: %u\n", (void*)ptr);
    
//     ptr = ptr + 2;  // Incrementing pointer by 2
    
//     printf("Address after ptr = ptr + 2: %u\n", (void*)ptr);

//     return 0;
// }



// -------------------------------------------------   Topic: Array      ------------------------------------------------- 

// // 1. WAP to calculate average marks of a 10 students.
// #include <stdio.h>
// int main() {
//     int marks[10];  // Array to store marks of 10 students
//     int sum = 0;
//     float average;

//     // Taking input for 10 students
//     printf("Enter marks of 10 students:\n");
//     for(int i = 0; i < 10; i++) {
//         printf("Student %d: ", i + 1);
//         scanf("%d", &marks[i]);
//         sum += marks[i];  // Summing up the marks
//     }

//     // Calculating average
//     average = sum / 10.0;

//     // Displaying the result
//     printf("\nTotal Marks: %d", sum);
//     printf("\nAverage Marks: %.2f\n", average);

//     return 0;
// }

// // 2. WAP to sort array in ascending order
// #include <stdio.h>

// void sortArray(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 // Swap elements if they are in the wrong order
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// int main() {
//     int n;

//     // Taking input for array size
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     int arr[n]; // Declare array of size n

//     // Taking input for array elements
//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // Sorting the array
//     sortArray(arr, n);

//     // Displaying the sorted array
//     printf("\nSorted array in ascending order:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }

// // 3. WAP to find greatest and smallest number in an array.
// #include <stdio.h>

// int main() {
//     int n;

//     // Taking input for array size
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     int arr[n];

//     // Taking input for array elements
//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // Initializing min and max with first element
//     int min = arr[0], max = arr[0];

//     // Finding smallest and greatest element
//     for (int i = 1; i < n; i++) {
//         if (arr[i] < min)
//             min = arr[i];
//         if (arr[i] > max)
//             max = arr[i];
//     }

//     // Displaying the results
//     printf("\nSmallest number: %d\n", min);
//     printf("Greatest number: %d\n", max);

//     return 0;
// }

// // 4. C Program to Find the Transpose of a Matrix
// #include <stdio.h>

// int main() {
//     int rows, cols;

//     // Taking input for matrix dimensions
//     printf("Enter number of rows and columns: ");
//     scanf("%d %d", &rows, &cols);

//     int matrix[rows][cols], transpose[cols][rows];

//     // Taking input for matrix elements
//     printf("Enter the elements of the matrix:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             scanf("%d", &matrix[i][j]);
//         }
//     }

//     // Calculating the transpose
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             transpose[j][i] = matrix[i][j];
//         }
//     }

//     // Displaying the original matrix
//     printf("\nOriginal Matrix:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             printf("%d ", matrix[i][j]);
//         }
//         printf("\n");
//     }

//     // Displaying the transposed matrix
//     printf("\nTranspose of the Matrix:\n");
//     for (int i = 0; i < cols; i++) {
//         for (int j = 0; j < rows; j++) {
//             printf("%d ", transpose[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// // 5. WAP to multiply a 3*3 matrix.
// #include <stdio.h>

// int main() {
//     int A[3][3], B[3][3], result[3][3];

//     // Taking input for first matrix
//     printf("Enter elements of first 3x3 matrix:\n");
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             scanf("%d", &A[i][j]);
//         }
//     }

//     // Taking input for second matrix
//     printf("Enter elements of second 3x3 matrix:\n");
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             scanf("%d", &B[i][j]);
//         }
//     }

//     // Initializing result matrix to 0
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             result[i][j] = 0;
//         }
//     }

//     // Performing matrix multiplication
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             for (int k = 0; k < 3; k++) {
//                 result[i][j] += A[i][k] * B[k][j];
//             }
//         }
//     }

//     // Displaying the resultant matrix
//     printf("\nResultant Matrix after multiplication:\n");
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             printf("%d ", result[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// // 6. Write a C program to compute sum of diagonal elements of an array
// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter the size of the square matrix: ");
//     scanf("%d", &n);

//     int matrix[n][n], sum = 0;

//     // Taking input for the matrix
//     printf("Enter the elements of the %dx%d matrix:\n", n, n);
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             scanf("%d", &matrix[i][j]);
//         }
//     }

//     // Calculating the sum of diagonal elements
//     for (int i = 0; i < n; i++) {
//         sum += matrix[i][i];  // Summing primary diagonal elements
//     }

//     // Displaying the result
//     printf("Sum of primary diagonal elements: %d\n", sum);

//     return 0;
// }

// // 7. Write a program to search particular value in an array and return the index number where it is located.
// #include <stdio.h>

// int search(int arr[], int size, int target) {
//     for (int i = 0; i < size; i++) {
//         if (arr[i] == target)
//             return i;  // Return index if found
//     }
//     return -1; // Return -1 if not found
// }

// int main() {
//     int arr[] = {10, 20, 30, 40, 50};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int target;

//     printf("Enter the value to search: ");
//     scanf("%d", &target);

//     int index = search(arr, size, target);

//     if (index != -1)
//         printf("Value found at index: %d\n", index);
//     else
//         printf("Value not found in array.\n");

//     return 0;
// }

// // 8. Perform following operations on two matrices with order m*n and p*q.
// // 9. Addition of two matrix
// #include <stdio.h>

// void matrixAddition(int m, int n, int A[m][n], int B[m][n], int result[m][n]) {
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             result[i][j] = A[i][j] + B[i][j];
//         }
//     }
// }

// void displayMatrix(int m, int n, int matrix[m][n]) {
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             printf("%d ", matrix[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main() {
//     int m, n;
//     printf("Enter matrix order (rows cols): ");
//     scanf("%d %d", &m, &n);

//     int A[m][n], B[m][n], result[m][n];

//     printf("Enter elements of first matrix:\n");
//     for (int i = 0; i < m; i++)
//         for (int j = 0; j < n; j++)
//             scanf("%d", &A[i][j]);

//     printf("Enter elements of second matrix:\n");
//     for (int i = 0; i < m; i++)
//         for (int j = 0; j < n; j++)
//             scanf("%d", &B[i][j]);

//     matrixAddition(m, n, A, B, result);

//     printf("Sum of matrices:\n");
//     displayMatrix(m, n, result);

//     return 0;
// }

// // 10. Multiplication of two matrix
// #include <stdio.h>

// void multiplyMatrices(int m, int n, int A[m][n], int p, int q, int B[p][q], int result[m][q]) {
//     if (n != p) {
//         printf("Matrix multiplication not possible.\n");
//         return;
//     }

//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < q; j++) {
//             result[i][j] = 0;
//             for (int k = 0; k < n; k++) {
//                 result[i][j] += A[i][k] * B[k][j];
//             }
//         }
//     }
// }

// void displayMatrix(int m, int n, int matrix[m][n]) {
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             printf("%d ", matrix[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main() {
//     int m, n, p, q;
    
//     printf("Enter order of first matrix (rows cols): ");
//     scanf("%d %d", &m, &n);
    
//     printf("Enter order of second matrix (rows cols): ");
//     scanf("%d %d", &p, &q);
    
//     if (n != p) {
//         printf("Matrix multiplication is not possible.\n");
//         return 0;
//     }

//     int A[m][n], B[p][q], result[m][q];

//     printf("Enter elements of first matrix:\n");
//     for (int i = 0; i < m; i++)
//         for (int j = 0; j < n; j++)
//             scanf("%d", &A[i][j]);

//     printf("Enter elements of second matrix:\n");
//     for (int i = 0; i < p; i++)
//         for (int j = 0; j < q; j++)
//             scanf("%d", &B[i][j]);

//     multiplyMatrices(m, n, A, p, q, B, result);

//     printf("Product of matrices:\n");
//     displayMatrix(m, q, result);

//     return 0;
// }

// // 11. WAP to check whether two matrtices are identical or not. 
// #include <stdio.h>
// int areIdentical(int m, int n, int A[m][n], int B[m][n]) {
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             if (A[i][j] != B[i][j])
//                 return 0; // Matrices are not identical
//         }
//     }
//     return 1; // Matrices are identical
// }

// int main() {
//     int m, n;
    
//     printf("Enter matrix order (rows cols): ");
//     scanf("%d %d", &m, &n);
    
//     int A[m][n], B[m][n];

//     printf("Enter elements of first matrix:\n");
//     for (int i = 0; i < m; i++)
//         for (int j = 0; j < n; j++)
//             scanf("%d", &A[i][j]);

//     printf("Enter elements of second matrix:\n");
//     for (int i = 0; i < m; i++)
//         for (int j = 0; j < n; j++)
//             scanf("%d", &B[i][j]);

//     if (areIdentical(m, n, A, B))
//         printf("Matrices are identical.\n");
//     else
//         printf("Matrices are not identical.\n");

//     return 0;
// }

// // 12. Given a 2D array, print it in spiral form. 
// //  I/p 1 2 3 4 5
// //      6 7 8 9 10
// //      11 12 13 14 15
// //  O/p 1 2 3 4 5 10 15 14 13 12 11 6 7 8 9

// #include <stdio.h>
// void printSpiral(int rows, int cols, int arr[rows][cols]) {
//     int top = 0, bottom = rows - 1, left = 0, right = cols - 1;

//     while (top <= bottom && left <= right) {
//         // Print top row (left to right)
//         for (int i = left; i <= right; i++)
//             printf("%d ", arr[top][i]);
//         top++;

//         // Print right column (top to bottom)
//         for (int i = top; i <= bottom; i++)
//             printf("%d ", arr[i][right]);
//         right--;

//         // Print bottom row (right to left)
//         if (top <= bottom) {
//             for (int i = right; i >= left; i--)
//                 printf("%d ", arr[bottom][i]);
//             bottom--;
//         }

//         // Print left column (bottom to top)
//         if (left <= right) {
//             for (int i = bottom; i >= top; i--)
//                 printf("%d ", arr[i][left]);
//             left++;
//         }
//     }
// }

// int main() {
//     int rows = 3, cols = 5;
//     int arr[3][5] = {
//         {1, 2, 3, 4, 5},
//         {6, 7, 8, 9, 10},
//         {11, 12, 13, 14, 15}
//     };

//     printf("Spiral Order: ");
//     printSpiral(rows, cols, arr);
//     printf("\n");

//     return 0;
// }

// // 13. Write a program to print all the LEADERS in the array. (An element is LEADER if it is greater than all the elements to its right side.) 
// #include <stdio.h>
// void printLeaders(int arr[], int size) {
//     int max_right = arr[size - 1];  
//     printf("Leaders: %d ", max_right);  

//     for (int i = size - 2; i >= 0; i--) {
//         if (arr[i] > max_right) {
//             max_right = arr[i];
//             printf("%d ", max_right);
//         }
//     }
// }

// int main() {
//     int arr[] = {16, 17, 4, 3, 5, 2};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     printLeaders(arr, size);
//     printf("\n");

//     return 0;
// }

// // 14. Sort array using bubble sort
// #include <stdio.h>
// void bubbleSort(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 // Swap elements
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// void printArray(int arr[], int size) {
//     for (int i = 0; i < size; i++)
//         printf("%d ", arr[i]);
//     printf("\n");
// }

// int main() {
//     int arr[] = {64, 34, 25, 12, 22, 11, 90};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     printf("Original array: ");
//     printArray(arr, n);

//     bubbleSort(arr, n);

//     printf("Sorted array: ");
//     printArray(arr, n);

//     return 0;
// }

// // 1. WAP to compare two strings using strcmp ().
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str1[100], str2[100];

//     printf("Enter first string: ");
//     fgets(str1,100,stdin);
//     printf("Enter second string: ");
//     fgets(str2,100,stdin);

//     int result = strcmp(str1, str2);

//     if (result == 0)
//         printf("Strings are equal.\n");
//     else 
//         printf("String are not equal.\n");

//     return 0;
// }

// // 2. WAP to concatenate two strings without using library function
// #include <stdio.h>
// #include <string.h>

// void concatenate(char str1[], char str2[]) {
//     int i = strlen(str1);  // Get length of first string
//     int j = 0;

//     // Remove newline character from fgets() if present
//     if (str1[i - 1] == '\n') {
//         str1[i - 1] = '\0';
//         i--;  // Adjust length after removing '\n'
//     }
//     if (str2[strlen(str2) - 1] == '\n') {
//         str2[strlen(str2) - 1] = '\0';
//     }

//     // Append str2 to str1
//     while (str2[j] != '\0') {
//         str1[i] = str2[j];
//         i++;
//         j++;
//     }
//     str1[i] = '\0';  // Null-terminate the concatenated string
// }

// int main() {
//     char str1[100], str2[50];

//     printf("Enter first string: ");
//     fgets(str1, 100, stdin);
//     printf("Enter second string: ");
//     fgets(str2, 50, stdin);

//     concatenate(str1, str2);

//     printf("Concatenated string: %s\n", str1);

//     return 0;
// }

// // 3. WAP to convert upper-case string into lower-case and vice versa .Write your own functions for the same.
// #include <stdio.h>
// void convertCase(char str[]) {
//     for (int i = 0; str[i] != '\0'; i++) {
//         if (str[i] >= 'A' && str[i] <= 'Z')  // Convert uppercase to lowercase
//             str[i] += 32;
//         else if (str[i] >= 'a' && str[i] <= 'z')  // Convert lowercase to uppercase
//             str[i] -= 32;
//     }
// }

// int main() {
//     char str[100];

//     printf("Enter a string: ");
//     fgets(str,100,stdin);

//     convertCase(str);

//     printf("Converted string: %s\n", str);

//     return 0;
// }


// // 4. Find a character (or substring) in a string without using library functions and print its ASCII value
// #include <stdio.h>

// void findChar(char str[], char ch) {
//     int i, found = 0;
//     for (i = 0; str[i] != '\0'; i++) {
//         if (str[i] == ch) {
//             printf("Character '%c' found at position %d with ASCII value %d\n", ch, i, ch);
//             found = 1;
//             break;
//         }
//     }
//     if (!found)
//         printf("Character '%c' not found in string.\n", ch);
// }

// int main() {
//     char str[100], ch;
//     printf("Enter a string: ");
//     fgets(str,100,stdin); // Using gets() for simplicity
//     printf("Enter character to find: ");
//     scanf("%c", &ch);
//     findChar(str, ch);
//     return 0;
// }

// 5. Eliminate vowels from a string
// #include <stdio.h>

// void removeVowels(char str[]) {
//     char result[100];
//     int i, j = 0;
//     for (i = 0; str[i] != '\0'; i++) {
//         char ch = str[i];
//         if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
//             ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
//             result[j++] = ch;
//         }
//     }
//     result[j] = '\0';
//     printf("String after removing vowels: %s\n", result);
// }

// int main() {
//     char str[100];
//     printf("Enter a string: ");
//     fgets(str,100,stdin);
//     removeVowels(str);
//     return 0;
// }

// 6. Check if a string is a palindrome
// #include <stdio.h>

// int isPalindrome(char str[]) {
//     int i, length = 0;
//     while (str[length] != '\0') length++; // Find length manually

//     for (i = 0; i < length / 2; i++) {
//         if (str[i] != str[length - i - 1])
//             return 0;
//     }
//     return 1;
// }

// int main() {
//     char str[100];
//     printf("Enter a string: ");
//     fgets(str,100,stdin);

//     if (isPalindrome(str))
//         printf("The string is a palindrome.\n");
//     else
//         printf("The string is not a palindrome.\n");
    
//     return 0;
// }

// 7. Count the number of blank spaces in a paragraph without using string functions
// #include <stdio.h>

// int countSpaces(char str[]) {
//     int count = 0, i = 0;
//     while (str[i] != '\0') {
//         if (str[i] == ' ')
//             count++;
//         i++;
//     }
//     return count;
// }

// int main() {
//     char str[200];
//     printf("Enter a paragraph: ");
//     fgets(str,100,stdin);

//     printf("Number of blank spaces: %d\n", countSpaces(str));
//     return 0;
// }

// 8. WAP to reverse the sentence or string without using library function.
//  for example 
// “hi all”
// reverse 1: “all hi”
// reverse 2: “lla ih”
// #include <stdio.h>
// #include <string.h>

// void reverseWords(char str[]) {
//     int i, j, start, end;
//     int length = 0;
    
//     while (str[length] != '\0') length++; // Find length manually

//     char result[100];
//     j = length;

//     result[j] = '\0';
//     j--; 

//     for (i = length - 1; i >= 0; i--) {
//         if (str[i] == ' ' || i == 0) {
//             start = (i == 0) ? i : i + 1;
//             end = j;
//             while (start <= end) {
//                 result[j--] = str[start++];
//             }
//             if (j >= 0) result[j--] = ' ';
//         }
//     }

//     printf("Reversed sentence (word-wise): %s\n", result);
// }

// int main() {
//     char str[100];
//     printf("Enter a sentence: ");
//     fgets(str,100,stdin);
//     reverseWords(str);
//     return 0;
// }

// (ii) Reverse a string character-wise
// #include <stdio.h>

// void reverseString(char str[]) {
//     int i, length = 0;
//     while (str[length] != '\0') length++;

//     for (i = 0; i < length / 2; i++) {
//         char temp = str[i];
//         str[i] = str[length - i - 1];
//         str[length - i - 1] = temp;
//     }

//     printf("Reversed sentence (character-wise): %s\n", str);
// }

// int main() {
//     char str[100];
//     printf("Enter a sentence: ");
//     fgets(str,100,stdin);
//     reverseString(str);
//     return 0;
// }

// 9. Display all possible library functions for reading and writing a string
// #include <stdio.h>

// int main() {
//     char str1[100], str2[100];

//     // Using scanf (only reads up to first space)
//     printf("Enter a string (scanf): ");
//     scanf("%s", str1);
//     printf("Using scanf: %s\n", str1);

//     // Using gets (reads entire line)
//     getchar(); // To consume the newline character left in buffer

//     // Using fgets (preferred over gets)
//     printf("Enter a string (fgets): ");
//     fgets(str2, sizeof(str2), stdin);
//     printf("Using fgets: %s", str2);

//     return 0;
// }

// #include <stdio.h>
// #include <ctype.h>

// void alternateUppercase(char str[]) {
//     int i, flag = 1; // Flag to track alternating characters

//     for (i = 0; str[i] != '\0'; i++) {
//         if (str[i] != ' ') {
//             if (flag)
//                 str[i] = toupper(str[i]);
//             else
//                 str[i] = tolower(str[i]);
//             flag = !flag;
//         }
//     }
// }

// int main() {
//     char str[100];
//     printf("Enter a string: ");
//     fgets(str,100,stdin);

//     alternateUppercase(str);
//     printf("Transformed String: %s\n", str);

//     return 0;
// }

// 11. Replace each lowercase letter with its next character
// #include <stdio.h>

// void transformString(char str[]) {
//     int i;
//     for (i = 0; str[i] != '\0'; i++) {
//         if (str[i] >= 'a' && str[i] <= 'z') {
//             str[i] = str[i] + 1;
//         }
//     }
// }

// int main() {
//     char str[100];
//     printf("Enter a string: ");
//     fgets(str,100,stdin);

//     transformString(str);
//     printf("Transformed String: %s\n", str);

//     return 0;
// }

// 12. Count different types of characters in a string
// #include <stdio.h>
// #include <ctype.h>

// void countCharacters(char str[]) {
//     int i, vowels = 0, consonants = 0, digits = 0, spaces = 0, special = 0;

//     for (i = 0; str[i] != '\0'; i++) {
//         char ch = str[i];

//         if (isalpha(ch)) {
//             ch = tolower(ch);
//             if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
//                 vowels++;
//             else
//                 consonants++;
//         } else if (isdigit(ch))
//             digits++;
//         else if (ch == ' ')
//             spaces++;
//         else
//             special++;
//     }

//     printf("Vowels: %d\nConsonants: %d\nDigits: %d\nSpaces: %d\nSpecial Characters: %d\n", vowels, consonants, digits, spaces, special);
// }

// int main() {
//     char str[200];
//     printf("Enter a string: ");
//     fgets(str,100,stdin);

//     countCharacters(str);
//     return 0;
// }

// 13. Dynamically read a string and sort it using bubble sort
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// void bubbleSort(char str[], int n) {
//     int i, j;
//     char temp;
//     for (i = 0; i < n - 1; i++) {
//         for (j = 0; j < n - i - 1; j++) {
//             if (str[j] > str[j + 1]) {
//                 temp = str[j];
//                 str[j] = str[j + 1];
//                 str[j + 1] = temp;
//             }
//         }
//     }
// }

// int main() {
//     char *str;
//     int n;

//     printf("Enter the length of the string: ");
//     scanf("%d", &n);
//     getchar(); // Consume newline character

//     str = (char *)malloc((n + 1) * sizeof(char)); // Dynamic allocation

//     if (str == NULL) {
//         printf("Memory allocation failed!\n");
//         return 1;
//     }

//     printf("Enter the string: ");
//     fgets(str, n + 1, stdin);

//     bubbleSort(str, strlen(str));

//     printf("Sorted string: %s\n", str);

//     free(str); // Free allocated memory
//     return 0;
// }

// // Memory allocation
// 1. Allocate memory for int, char, and float at runtime
// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int *intPtr;
//     char *charPtr;
//     float *floatPtr;

//     // Allocating memory
//     intPtr = (int *)malloc(sizeof(int));
//     charPtr = (char *)malloc(sizeof(char));
//     floatPtr = (float *)malloc(sizeof(float));

//     if (intPtr == NULL || charPtr == NULL || floatPtr == NULL) {
//         printf("Memory allocation failed!\n");
//         return 1;
//     }

//     // Taking inputs
//     printf("Enter an integer: ");
//     scanf("%d", intPtr);
//     getchar();  // Consume newline
//     printf("Enter a character: ");
//     scanf("%c", charPtr);
//     printf("Enter a float: ");
//     scanf("%f", floatPtr);

//     // Printing values
//     printf("\nInteger: %d\nCharacter: %c\nFloat: %.2f\n", *intPtr, *charPtr, *floatPtr);

//     // Freeing memory
//     free(intPtr);
//     free(charPtr);
//     free(floatPtr);

//     return 0;
// }

// 2. Input and print text using Dynamic Memory Allocation
// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     char *text;
//     int size;

//     printf("Enter the size of text: ");
//     scanf("%d", &size);
//     getchar();  // Consume newline character

//     text = (char *)malloc((size + 1) * sizeof(char));

//     if (text == NULL) {
//         printf("Memory allocation failed!\n");
//         return 1;
//     }

//     printf("Enter the text: ");
//     fgets(text, size + 1, stdin);

//     printf("You entered: %s", text);

//     free(text);
//     return 0;
// }

// 3. Read and print a 1D array, compute sum using Dynamic Memory Allocation
// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int *arr, n, i, sum = 0;

//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     arr = (int *)malloc(n * sizeof(int));

//     if (arr == NULL) {
//         printf("Memory allocation failed!\n");
//         return 1;
//     }

//     printf("Enter %d elements:\n", n);
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//         sum += arr[i];
//     }

//     printf("Array elements: ");
//     for (i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }

//     printf("\nSum of elements: %d\n", sum);

//     free(arr);
//     return 0;
// }

// 4. Read and print student details using structure and Dynamic Memory Allocation
// #include <stdio.h>
// #include <stdlib.h>

// struct Student {
//     char name[50];
//     int age;
//     float marks;
// };

// int main() {
//     struct Student *stud;

//     // Allocating memory for one student
//     stud = (struct Student *)malloc(sizeof(struct Student));

//     if (stud == NULL) {
//         printf("Memory allocation failed!\n");
//         return 1;
//     }

//     // Input details
//     printf("Enter name: ");
//     fgets(stud->name, 50, stdin);
//     printf("Enter age: ");
//     scanf("%d", &stud->age);
//     printf("Enter marks: ");
//     scanf("%f", &stud->marks);

//     // Print details
//     printf("\nStudent Details:\n");
//     printf("Name: %s", stud->name);
//     printf("Age: %d\n", stud->age);
//     printf("Marks: %.2f\n", stud->marks);

//     // Free memory
//     free(stud);
//     return 0;
// }

// 5. Read and print N student details using structure and Dynamic Memory Allocation
// #include <stdio.h>
// #include <stdlib.h>

// struct Student {
//     char name[50];
//     int age;
//     float marks;
// };

// int main() {
//     struct Student *students;
//     int n, i;

//     printf("Enter the number of students: ");
//     scanf("%d", &n);
//     getchar(); // Consume newline

//     students = (struct Student *)malloc(n * sizeof(struct Student));

//     if (students == NULL) {
//         printf("Memory allocation failed!\n");
//         return 1;
//     }

//     // Input student details
//     for (i = 0; i < n; i++) {
//         printf("\nEnter details for student %d:\n", i + 1);
//         printf("Enter name: ");
//         fgets(students[i].name, 50, stdin);
//         printf("Enter age: ");
//         scanf("%d", &students[i].age);
//         printf("Enter marks: ");
//         scanf("%f", &students[i].marks);
//         getchar(); // Consume newline
//     }

//     // Print student details
//     printf("\nStudent Details:\n");
//     for (i = 0; i < n; i++) {
//         printf("\nStudent %d:\n", i + 1);
//         printf("Name: %s", students[i].name);
//         printf("Age: %d\n", students[i].age);
//         printf("Marks: %.2f\n", students[i].marks);
//     }

//     // Free memory
//     free(students);
//     return 0;
// }


// // File Handling:

// int main() {
//     FILE *fp;
//     int n;
//     char name[50];
//     float marks;

//     fp = fopen("students.txt", "w");  // Open file in write mode
//     if (fp == NULL) {
//         printf("Error opening file!\n");
//         return 1;
//     }

//     printf("Enter number of students: ");
//     scanf("%d", &n);
//     getchar(); // Consume newline

//     for (int i = 0; i < n; i++) {
//         printf("Enter name of student %d: ", i + 1);
//         fgets(name, 50, stdin);
//         printf("Enter marks of student %d: ", i + 1);
//         scanf("%f", &marks);
//         getchar(); // Consume newline

//         fprintf(fp, "%s %.2f\n", name, marks);
//     }

//     fclose(fp);
//     printf("Data successfully written to students.txt\n");

//     return 0;
// }

// 2. Append students' data to an existing file
// #include <stdio.h>

// int main() {
//     FILE *fp;
//     int n;
//     char name[50];
//     float marks;

//     fp = fopen("students.txt", "a");  // Open file in append mode
//     if (fp == NULL) {
//         printf("Error opening file!\n");
//         return 1;
//     }

//     printf("Enter number of students to add: ");
//     scanf("%d", &n);
//     getchar(); // Consume newline

//     for (int i = 0; i < n; i++) {
//         printf("Enter name of student %d: ", i + 1);
//         fgets(name, 50, stdin);
//         printf("Enter marks of student %d: ", i + 1);
//         scanf("%f", &marks);
//         getchar(); // Consume newline

//         fprintf(fp, "%s %.2f\n", name, marks);
//     }

//     fclose(fp);
//     printf("Data successfully appended to students.txt\n");

//     return 0;
// }

// 3. Write and read array of structures using fprintf()
// #include <stdio.h>
// #include <stdlib.h>

// struct Student {
//     char name[50];
//     float marks;
// };

// int main() {
//     FILE *fp;
//     int n;
//     struct Student *students;

//     printf("Enter number of students: ");
//     scanf("%d", &n);
//     getchar(); // Consume newline

//     students = (struct Student *)malloc(n * sizeof(struct Student));

//     fp = fopen("students_data.txt", "w");
//     if (fp == NULL) {
//         printf("Error opening file!\n");
//         return 1;
//     }

//     for (int i = 0; i < n; i++) {
//         printf("Enter name of student %d: ", i + 1);
//         fgets(students[i].name, 50, stdin);
//         printf("Enter marks of student %d: ", i + 1);
//         scanf("%f", &students[i].marks);
//         getchar();
//         fprintf(fp, "%s %.2f\n", students[i].name, students[i].marks);
//     }
//     fclose(fp);
//     free(students);

//     // Read from file and display
//     fp = fopen("students_data.txt", "r");
//     printf("\nStored Data:\n");
//     while (fgets(students[0].name, 50, fp) != NULL) {
//         printf("%s", students[0].name);
//     }
//     fclose(fp);

//     return 0;
// }

// 4. Write to a text file using fprintf()
// #include <stdio.h>

// int main() {
//     FILE *fp;
//     fp = fopen("output.txt", "w");

//     if (fp == NULL) {
//         printf("Error opening file!\n");
//         return 1;
//     }

//     fprintf(fp, "Hello, this is a sample text written using fprintf().\n");

//     fclose(fp);
//     printf("Data successfully written to output.txt\n");

//     return 0;
// }

// 5. Append the content of one file to another
// #include <stdio.h>

// int main() {
//     FILE *fp1, *fp2;
//     char ch;

//     fp1 = fopen("source.txt", "r");
//     fp2 = fopen("destination.txt", "a");

//     if (fp1 == NULL || fp2 == NULL) {
//         printf("Error opening files!\n");
//         return 1;
//     }

//     while ((ch = fgetc(fp1)) != EOF) {
//         fputc(ch, fp2);
//     }

//     fclose(fp1);
//     fclose(fp2);
//     printf("Content appended successfully.\n");

//     return 0;
// }

// 6. Capitalize first letter of every word in a file
// #include <stdio.h>
// #include <ctype.h>

// int main() {
//     FILE *fp1, *fp2;
//     char ch, prev = ' ';

//     fp1 = fopen("input.txt", "r");
//     fp2 = fopen("output.txt", "w");

//     if (fp1 == NULL || fp2 == NULL) {
//         printf("Error opening file!\n");
//         return 1;
//     }

//     while ((ch = fgetc(fp1)) != EOF) {
//         if (prev == ' ' || prev == '\n') {
//             fputc(toupper(ch), fp2);
//         } else {
//             fputc(ch, fp2);
//         }
//         prev = ch;
//     }

//     fclose(fp1);
//     fclose(fp2);
//     printf("Capitalization done!\n");

//     return 0;
// }

// 7. Count lines, blank lines, and comments in a file
// #include <stdio.h>

// int main() {
//     FILE *fp;
//     char ch;
//     int lines = 0, blankLines = 0, comments = 0;
//     int prevChar = '\n';

//     fp = fopen("input.txt", "r");
//     if (fp == NULL) {
//         printf("Error opening file!\n");
//         return 1;
//     }

//     while ((ch = fgetc(fp)) != EOF) {
//         if (ch == '\n') {
//             lines++;
//             if (prevChar == '\n') blankLines++;
//         }
//         if (prevChar == '/' && ch == '/') comments++;

//         prevChar = ch;
//     }

//     fclose(fp);
//     printf("Total lines: %d\nBlank lines: %d\nComments: %d\n", lines, blankLines, comments);

//     return 0;
// }

// 8. Program that outputs its own source code
// #include <stdio.h>

// int main() {
//     FILE *fp;
//     char ch;

//     fp = fopen(__FILE__, "r");
//     if (fp == NULL) {
//         printf("Error opening file!\n");
//         return 1;
//     }

//     while ((ch = fgetc(fp)) != EOF) {
//         putchar(ch);
//     }

//     fclose(fp);
//     return 0;
// }

// 9. Remove spaces from a file and store in a new file
// #include <stdio.h>

// int main() {
//     FILE *fp1, *fp2;
//     char ch;

//     fp1 = fopen("input.txt", "r");
//     fp2 = fopen("output.txt", "w");

//     if (fp1 == NULL || fp2 == NULL) {
//         printf("Error opening file!\n");
//         return 1;
//     }

//     while ((ch = fgetc(fp1)) != EOF) {
//         if (ch != ' ') {
//             fputc(ch, fp2);
//         }
//     }

//     fclose(fp1);
//     fclose(fp2);
//     printf("Spaces removed successfully!\n");

//     return 0;
// }



// // Structure and Union
// 1. Create a Student structure, an array of 10 students using #define, and display the data in tabular form
// #include <stdio.h>

// #define SIZE 10  // Macro for array size

// struct Student {
//     int rollNo;
//     char name[50];
//     float marks;
// };

// int main() {
//     struct Student students[SIZE];

//     printf("Enter details of %d students:\n", SIZE);
//     for (int i = 0; i < SIZE; i++) {
//         printf("Student %d:\n", i + 1);
//         printf("Enter Roll No: ");
//         scanf("%d", &students[i].rollNo);
//         getchar();  // Consume newline
//         printf("Enter Name: ");
//         fgets(students[i].name, 50, stdin);
//         printf("Enter Marks: ");
//         scanf("%f", &students[i].marks);
//     }

//     printf("\n%-10s %-30s %-10s\n", "Roll No", "Name", "Marks");
//     printf("---------------------------------------------------\n");
//     for (int i = 0; i < SIZE; i++) {
//         printf("%-10d %-30s %-10.2f\n", students[i].rollNo, students[i].name, students[i].marks);
//     }

//     return 0;
// }

// 2. Create an Employee structure, accept data for 5 employees, and display it
// #include <stdio.h>

// struct Employee {
//     int id;
//     char name[50];
//     float salary;
// };

// int main() {
//     struct Employee employees[5];

//     for (int i = 0; i < 5; i++) {
//         printf("Enter details of Employee %d:\n", i + 1);
//         printf("Enter ID: ");
//         scanf("%d", &employees[i].id);
//         getchar();
//         printf("Enter Name: ");
//         fgets(employees[i].name, 50, stdin);
//         printf("Enter Salary: ");
//         scanf("%f", &employees[i].salary);
//     }

//     printf("\n%-10s %-30s %-10s\n", "ID", "Name", "Salary");
//     printf("---------------------------------------------\n");
//     for (int i = 0; i < 5; i++) {
//         printf("%-10d %-30s %-10.2f\n", employees[i].id, employees[i].name, employees[i].salary);
//     }

//     return 0;
// }

// 3. Demonstrate union and find its size
// #include <stdio.h>

// union Data {
//     int i;
//     float f;
//     char str[20];
// };

// int main() {
//     union Data data;
    
//     printf("Size of union: %lu bytes\n", sizeof(data));
    
//     data.i = 10;
//     printf("Integer: %d\n", data.i);

//     data.f = 220.5;
//     printf("Float: %.2f\n", data.f);

//     sprintf(data.str, "Hello");
//     printf("String: %s\n", data.str);

//     return 0;
// }

// 4. Demonstrate typedef keyword
// #include <stdio.h>

// typedef struct {
//     int id;
//     char name[50];
//     float salary;
// } Employee;

// int main() {
//     Employee emp = {101, "John Doe", 50000.0};

//     printf("ID: %d\nName: %sSalary: %.2f\n", emp.id, emp.name, emp.salary);

//     return 0;
// }

// 5. Copy one structure into another using nested structures
// #include <stdio.h>

// struct Address {
//     char city[50];
//     char state[50];
// };

// struct Employee {
//     int id;
//     char name[50];
//     struct Address addr;
// };

// int main() {
//     struct Employee emp1 = {101, "Alice", {"New York", "NY"}};
//     struct Employee emp2;

//     emp2 = emp1; // Copying structure

//     printf("Copied Employee Details:\n");
//     printf("ID: %d\nName: %sCity: %s\nState: %s\n", emp2.id, emp2.name, emp2.addr.city, emp2.addr.state);

//     return 0;
// }

// 6. Create Employee structure with id, name, and salary
// #include <stdio.h>

// struct Employee {
//     int id;
//     char name[50];
//     float salary;
// };

// int main() {
//     struct Employee emp = {1, "John Doe", 45000.00};
//     printf("ID: %d\nName: %sSalary: %.2f\n", emp.id, emp.name, emp.salary);
//     return 0;
// }

// 7. Create Date structure with dd, mm, yy
// #include <stdio.h>

// struct Date {
//     int dd, mm, yy;
// };

// int main() {
//     struct Date today = {31, 3, 2025};

//     printf("Date: %02d-%02d-%04d\n", today.dd, today.mm, today.yy);
//     return 0;
// }

// 8. Nest Date structure inside Employee to store joining date
// #include <stdio.h>

// struct Date {
//     int dd, mm, yy;
// };

// struct Employee {
//     int id;
//     char name[50];
//     struct Date joinDate;
// };

// int main() {
//     struct Employee emp = {101, "John Doe", {12, 7, 2020}};

//     printf("Employee ID: %d\nName: %sJoining Date: %d-%d-%d\n",
//            emp.id, emp.name, emp.joinDate.dd, emp.joinDate.mm, emp.joinDate.yy);
    
//     return 0;
// }
// 9. Pass structure to function by value
// #include <stdio.h>

// struct Employee {
//     int id;
//     char name[50];
//     float salary;
// };

// void display(struct Employee emp) {
//     printf("ID: %d\nName: %sSalary: %.2f\n", emp.id, emp.name, emp.salary);
// }

// int main() {
//     struct Employee emp = {101, "John Doe", 50000.0};
//     display(emp);
//     return 0;
// }

// 10. Create a banking customer structure
// #include <stdio.h>

// struct BankCustomer {
//     char name[50];
//     int accountNo;
//     float balance;
// };

// int main() {
//     struct BankCustomer customer = {"Alice Brown", 123456789, 15000.50};

//     printf("Customer Name: %s\nAccount Number: %d\nBalance: %.2f\n", 
//            customer.name, customer.accountNo, customer.balance);
    
//     return 0;
// }