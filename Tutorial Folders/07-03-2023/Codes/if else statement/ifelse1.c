// WAP to input any number and check whether it is positive or negative or zero
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    if (n > 0)
    {
        printf("%d is a Positive Number", n);
    }
    else if (n < 0) // else-if ladder
    {
        printf("%d is a Negative Number", n);
    }
    else
    {
        printf("%d is zero", n);
    }
    return 0;
}