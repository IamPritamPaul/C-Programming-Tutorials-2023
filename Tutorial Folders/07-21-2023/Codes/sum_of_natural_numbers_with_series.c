#include <stdio.h>

int sum_with_series(int n)
{
    int sum;
    if (n == 0)
        return 0;
    sum = n + sum_with_series(n - 1);
    printf(" %d +", n);
    return sum;
}

int main()
{
    int n;
    printf("Enter any number:- ");
    scanf("%d", &n);
    printf("\b\b = %d", sum_with_series(n));
    return 0;
}