#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter any two numbers: ");
    scanf("%d%d", &a, &b);

    // before swapping
    printf("Before swapping\na = %d , b = %d\n", a, b);
    // method 1 (using third variable)
    /* int c;
    c = a;
    a = b;
    b = c;
    printf("After swapping\na = %d , b = %d\n", a, b); */

    // method 2 using arithmetic operator
    /* a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping\na = %d , b = %d\n", a, b); */

    // method 3 using bitwise operator
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After swapping\na = %d , b = %d\n", a, b);
    return 0;
}