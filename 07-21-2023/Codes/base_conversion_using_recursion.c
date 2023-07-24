#include <stdio.h>
void convert(int number, int base)
{
    if (number == 0)
        return;
    int rem = number % base;
    convert(number / base, base);
    if (rem < 10)
        printf("%d", rem);
    else
        printf("%c", 'A' + rem - 10);
}
int main()
{
    int n;
    printf("Enter any decimal number:- ");
    scanf("%d", &n);
    int base;
    printf("Enter the base:- ");
    scanf("%d", &base);
    convert(n, base);
    return 0;
}