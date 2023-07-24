#include <stdio.h>
int main()
{
    int a = 10;
    printf("%d\n", a++); // 10
    printf("%d\n", a);   // 11
    printf("%d\n", ++a); // 12
    printf("%d\n", a--); // 12
    printf("%d\n", a);   // 11
    printf("%d\n", a++); // 11
    printf("%d\n", ++a); // 13
    printf("%d\n", a--); // 13
    printf("%d\n", a--); // 12
    printf("%d\n", a++); // 11
    printf("%d\n", --a); // 12
    return 0;
}