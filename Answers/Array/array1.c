// WAP to input 10 integers in an 1-D array print them
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
    printf("The array is :- ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}