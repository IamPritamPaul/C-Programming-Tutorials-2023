/*
1
2 2
3 3 3
2 2 2 2
1 1 1 1 1
*/

#include <stdio.h>
int main()
{
    int number = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", number);
        }
        if (i <= 2)
            number++;
        else
            number--;
        printf("\n");
    }
    return 0;
}