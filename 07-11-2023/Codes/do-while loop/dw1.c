// do while loop
/*
do{
    statement 1;
    statement 2;
    statement 3;
}while(condition/statement);
*/

#include <stdio.h>
int main()
{
    int i = 0;
    do
    {
        printf("%d\t", i);
        i++;
    } while (i < 10);
    return 0;
}