#include <stdio.h>
void swap(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
int main()
{
    int a = 10, b = 20;
    printf("a=%d,b=%d\n", a, b); // a=10,b=20
    swap(&a, &b);
    printf("a=%d,b=%d\n", a, b); // a=10,b=20
    return 0;
}