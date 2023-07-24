#include <stdio.h>
int main()
{
    /* int a = 10;
    int p = &a;
    printf("a=%d\np=%p\n", a, p); */
    int a = 10;
    int *p = &a;
    printf("a=%d\np=%d\n", a, p);
    return 0;
}