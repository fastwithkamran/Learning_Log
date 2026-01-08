/* Write a program that reads a string using scanf so that it accepts and stores all characters
except alphabets. The program should then display the entered non-alphabetic characters on the screen. */


#include <stdio.h>
int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf("%[^A-Za-z]", str);


    printf("You entered: %s\n", str);
    
    return 0;
}
