// write a program to input lower limit and upper limit and print the multiplication table of each number.(using for loop)
#include <stdio.h>
int main()
{
    int ll, ul;
    printf("Enter the lower limit and upper limit: ");
    scanf("%d%d", &ll, &ul);
    for (int number = ll; number <= ul; number++)
    {
        printf("The multiplication table of %d is :\n", number);
        for (int i = 1; i <= 10; i++)
        {
            printf("%d * %d = %d\n", number, i, number * i);
        }
        printf("\n");
    }
    return 0;
}