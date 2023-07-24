// finding GCD using recursion
#include <stdio.h>

int gcd(int n, int m)
{
    if (m == 0)
        return n;
    return gcd(m, n % m);
}
int main()
{
    int n, m;
    printf("Enter two numbers:- ");
    scanf("%d%d", &n, &m);
    printf("The GCD od %d and %d is %d", n, m, gcd(n, m));
    return 0;
}