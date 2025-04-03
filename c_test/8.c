//8. Implementing a Stack Using Arrays
// Question: Write a C program to implement a stack data structure using arrays.
// The program should support the following operations:

// Push
// Pop
// Peek
// Display

// Test Case:
// Push 5, 10, 15 to the stack.
// Pop an element.
// Peek at the top element.
// Display the stack.

// Expected Output:
// Stack after push operations: 15 10 5
// Element popped: 15
// Element at the top: 10
// Stack after pop: 10 5

#include <stdio.h>
#define MAX 100 // Define maximum stack size

int stack[MAX], top = -1; // Stack array and top pointer

// Function to push an element onto the stack
void push(int val) {
    if (top == MAX - 1) { // Check for stack overflow
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = val; // Increment top and add value
}

// Function to pop an element from the stack
int pop() {
    if (top == -1) { // Check for stack underflow
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--]; // Return the top element and decrement top
}

// Function to peek at the top element without removing it
int peek() {
    if (top == -1) {
        printf("Stack is empty\n");
        return -1;
    }
    return stack[top];
}

// Function to display the stack elements
void display() {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    // Push elements onto the stack
    push(5);
    push(10);
    push(15);
    printf("Stack after push operations: ");
    display(); // Display stack

    // Pop an element and print it
    printf("Element popped: %d\n", pop());

    // Peek at the top element
    printf("Element at the top: %d\n", peek());

    // Display the stack after pop
    printf("Stack after pop: ");
    display();

    return 0;
}
