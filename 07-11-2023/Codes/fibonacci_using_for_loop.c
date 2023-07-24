#include <stdio.h>
int main()
{
    int a = 0, b = 1;
    for (int i = 0; i < 10; i += 2)
    {
        printf("%d\t%d\t", a, b);
        a = a + b;
        b = a + b;
    }
    return 0;
}