// WAP to input 10 integers in an 1-D array and find the sum of all the numbers in the array
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
    // calculate sum
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += a[i];
    }
    printf("The sum of all the numbers in the array is %d.", sum);
    return 0;
}