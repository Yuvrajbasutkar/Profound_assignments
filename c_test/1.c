// Write a C program that finds the largest number in a given array of integers.

#include <stdio.h>

int main() {
    int arr[] = {1, 3, 7, 1000, 5};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements
    int large = arr[0]; // Initialize largest with the first element

    for (int i = 1; i < n; i++) {
        if (arr[i] > large) {
            large = arr[i];
        }
    }

    printf("Largest number is %d\n", large);

    return 0;
}