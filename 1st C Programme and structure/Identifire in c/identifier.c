#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    ch = getc(stdin);  // Reads a single character from input

    printf("The next character is: ");
    putc(ch + 1, stdout);  // Prints the next ASCII character

    return 0;
}