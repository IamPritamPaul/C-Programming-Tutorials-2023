#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter any number:- ");
    scanf("%d", &n);
    int count_digit = 0, copy_n = n;
    while (copy_n > 0)
    {
        count_digit++;
        copy_n /= 10;
    }
    int ultimate_number = 0;
    copy_n = n;
    while (n > 0)
    {
        int digit = n % 10;
        ultimate_number += pow(digit, count_digit);
        n /= 10;
    }
    if (ultimate_number == copy_n)
    {
        printf("Armstrong Number.");
    }
    else
    {
        printf("Not an armstrong number.");
    }
    return 0;
}