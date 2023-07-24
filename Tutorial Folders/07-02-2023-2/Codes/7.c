// Write a program to input any character and print the ASCII value of that character.
#include <stdio.h>
int main()
{
    char c;
    printf("Enter any character: ");
    scanf("%c", &c);
    int n = c;
    printf("%d is the ASCII value of the character %c", n, c);
    return 0;
}