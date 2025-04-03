// 2. Reverse a String Without Using Library Functions
#include <stdio.h>

// Function to reverse a string
void reverseString(char str[]) {
    int length = 0;

    // Calculate the length of the string
    while (str[length] != '\0') {
        length++;
    }

    // Swap characters from start to end
    for (int i = 0, j = length - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[] = "hello";   // Input string
    reverseString(str);    // Reverse the string
    printf("%s\n", str);  // Print the reversed string
    return 0;
}