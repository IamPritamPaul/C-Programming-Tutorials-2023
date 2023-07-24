#include <stdio.h>
int main()
{
    int i = 0;
abc:
    printf("%d\t", i);
    if (i++ < 10)
        goto abc;
    return 0;
}