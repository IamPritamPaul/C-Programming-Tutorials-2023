#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    /* for (int i = 0; i < 5; i++)
    {
        printf("arr[%d]=%d\t%d[arr]=%d\n", i, arr[i], i, arr[i]);
    } */
    /* for (int i = 0; i < 5; i++)
    {
        printf("arr[%d]=%d\t*(arr+%d)=%d\n", i, arr[i], i, arr[i]);
    } */
    printf("%p\n", arr);
    printf("%p\n", arr + 1);
    return 0;
}