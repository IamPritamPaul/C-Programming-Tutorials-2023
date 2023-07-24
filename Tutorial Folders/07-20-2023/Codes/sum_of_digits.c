#include <stdio.h>

int SumOfDigits(int n)
{
    if (n / 10 == 0)
        return n;
    return n % 10 + SumOfDigits(n / 10);
}
int main()
{
    int n;
    printf("Enter any number:- ");
    scanf("%d", &n);
    printf("The sum of all the digits of %d is %d", n, SumOfDigits(n));
    return 0;
}