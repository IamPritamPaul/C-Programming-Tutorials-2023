// Write a program to input lower limit and upper limit and print all the armstrong numbers in that range using function call by value with/without(whatever you want) return.

#include <stdio.h>
#include <math.h>

int calc_pow(int x, int y)
{
    int result = 1;
    for (int i = 1; i <= y; i++)
    {
        result *= x;
    }
    return result;
}
int count_number_of_digits(int x)
{
    int count = 0;
    while (x)
    {
        count++;
        x /= 10;
    }
    return count;
}

int check_armstrong(int n)
{
    int sum = 0, copy_n = n;
    int count_digits = count_number_of_digits(n);
    while (n > 0)
    {
        int digit = n % 10;
        int p = calc_pow(digit, count_digits);
        // printf("\np=%d", p);
        sum += p;
        n /= 10;
    }
    return (sum == copy_n);
}
int main()
{
    int ll, ul;
    printf("Enter lower and upper limit: ");
    scanf("%d%d", &ll, &ul);
    for (int i = ll; i <= ul; i++)
    {
        // printf("\n------------------------------------------%d--------------------------------\n", i);
        if (check_armstrong(i))
            printf("\n%d", i);
    }
    return 0;
}