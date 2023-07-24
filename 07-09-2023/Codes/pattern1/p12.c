/*
A
B B
C C C
D D D D
E E E E E
*/

#include <stdio.h>
int main()
{
    /* for (char i = 'A'; i <= 'E'; i++)
    {
        for (char j = 'A'; j <= i; j++)
        {
            printf("%c ", i);
        }
        printf("\n");
    } */
    for (int i = 65; i <= 69; i++)
    {
        for (int j = 65; j <= i; j++)
        {
            printf("%c ", i);
        }
        printf("\n");
    }
    return 0;
}