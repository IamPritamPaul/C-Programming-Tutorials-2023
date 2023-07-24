// Write a program to input lower limit and upper limit and print all the strong numbers in that range
#include <stdio.h>
int main()
{
    int ll, ul;
    printf("Enter the lower limit and upper limit: ");
    scanf("%d%d", &ll, &ul);
    printf("The list of strong numbers in this range is:\n");
    for (int number = ll; number <= ul; number++)
    {
        int sum = 0;
        int x = number;
        for (; x > 0; x /= 10)
        {
            int digit = x % 10;
            int f = 1;
            for (int i = 1; i <= digit; i++)
            {
                f *= i;
            }
            sum += f;
        }
        if (sum == number)
        {
            printf("%d\t", number);
        }
    }
    return 0;
}