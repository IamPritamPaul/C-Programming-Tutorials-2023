// WAP to input any number and it must be a positive number, user can't input any negative number.
#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("Enter any positive number:- ");
        scanf("%d", &n);
    } while (n < 0);
    printf("%d is the number", n);
    return 0;
}