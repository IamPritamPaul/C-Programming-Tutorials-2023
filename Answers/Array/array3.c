#include <stdio.h>
int main()
{
    int a[10];
    // input
    printf("Enter the array:- ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    int small = a[0];
    for (int i = 1; i < 10; i++)
    {
        if (a[i] < small)
            small = a[i];
    }
    printf("The smallest number in the array is: %d", small);
    return 0;
}