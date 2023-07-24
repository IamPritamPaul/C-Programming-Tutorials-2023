// WAP to input 10 integers in an 1-D array and find the smallest one using function call by value with return.
#include <stdio.h>
int smallest_in_the_array(int a[], int n)
{
    int small = a[0];
    for (int i = 1; i < 10; i++)
    {
        if (a[i] < small)
            small = a[i];
    }
    return small;
}
int main()
{
    int a[10];
    // input
    printf("Enter the array:- ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The smallest number in the array is: %d", smallest_in_the_array(a, 10));
    return 0;
}