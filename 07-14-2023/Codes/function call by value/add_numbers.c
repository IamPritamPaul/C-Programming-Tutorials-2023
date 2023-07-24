#include <stdio.h>
// int sum(int, int); /// function declaration
int sum(int a, int b) // function definition
{
    return a + b;
}
int main()
{
    int a, b;
    printf("Enter any two numbers: ");
    scanf("%d%d", &a, &b);

    // int c = sum(a, b); // function call by value with return
    printf("%d is the summation of the two numbers", sum(a, b));
    return 0;
}
