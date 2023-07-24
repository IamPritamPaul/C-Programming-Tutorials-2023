#include <stdio.h>
int main()
{
    int a = 9, b = 15;
    int f = (a > b) ? a - b : b - a;
    printf("(a > b) ? a - b : b - a ----> %d\n", f);
    f = -a > (b ? (a - b) : (b - a));
    printf("-a > (b ? (a - b) : (b - a)) ----> %d", f);
    return 0;
}