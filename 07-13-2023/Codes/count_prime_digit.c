// Write a program to input any number and count the prime digits(using do-while)
#include <stdio.h>
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    int count_prime_digit = 0;
    do
    {
        int digit = num % 10;
        int count_factor = 0;
        int i = 1;
        do
        {
            if (digit % i == 0)
            {
                count_factor++;
            }
        } while (i <= digit);
        if (count_factor == 2)
        {
            count_prime_digit++;
        }
        num /= 10;
    } while (num > 0);
    printf("The count of prime digit is %d", count_prime_digit);
    return 0;
}