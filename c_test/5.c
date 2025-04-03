//5 Counting Vowels and Consonants in a String

#include <stdio.h>

int main() {
    char str[] = "Hello World"; // Input string
    int vowels = 0, consonants = 0;
    char ch;

    // Iterate through each character of the string
    for (int i = 0; str[i] != '\0'; i++) {
        ch = str[i];

        // Check if the character is an alphabet
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            // Convert uppercase to lowercase for comparison
            ch = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;

            // Check if it's a vowel or consonant
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    // Print the number of vowels and consonants
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    return 0;
}