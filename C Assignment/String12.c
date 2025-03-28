// 12. Write a program to count different types of characters in given string.
#include<stdio.h>
#include<ctype.h>
void main(){
    char a[30];
    int l=0,u=0,d=0,s=0,sp=0;
    printf("Enter the String\n");
    gets(a);
    printf("the String is\n");
    puts(a);
    for (int i = 0; a[i] != '\0'; i++) {
        if (islower(a[i])) 
            l++;  // Count lowercase letters
        else if (isupper(a[i])) 
            u++;  // Count uppercase letters
        else if (isdigit(a[i])) 
            d++;     // Count digits
        else if (isspace(a[i])) 
            s++;     // Count spaces, tabs, newlines
        else 
            sp++;    // Count special characters
    }

    // Display results
    printf("Lowercase letters: %d\n", l);
    printf("Uppercase letters: %d\n", u);
    printf("Digits: %d\n", d);
    printf("Whitespace characters: %d\n", s);
    printf("Special characters: %d\n", sp);
}
