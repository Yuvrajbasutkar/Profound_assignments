// WAP to demonstrate all four categories of functions for volume of the cylinder
//  (volume of cylinder: 3.14*r*r*h)
//  a) Function without parameters without return value.
//  b) Function with parameter without return value.
//  c) Function without parameter with return value.
//  d) Function with parameters with return value.
 
#include <stdio.h>

// a) Function without parameters and without return value
void greet() {
    printf("Hello, welcome!\n");
}

// b) Function with parameter and without return value
void greetUser(char name[]) {
    printf("Hello, %s!\n", name);
}

// c) Function without parameter and with return value
int getNumber() {
    return 42;
}

// d) Function with parameters and with return value
int add(int a, int b) {
    return a + b;
}

int main() {
    // Calling function without parameters & without return value
    greet();

    // Calling function with parameter & without return value
    greetUser("Alice");

    // Calling function without parameter & with return value
    int num = getNumber();
    printf("The number is: %d\n", num);

    // Calling function with parameters & with return value
    int sum = add(5, 3);
    printf("Sum is: %d\n", sum);

    return 0;
}
