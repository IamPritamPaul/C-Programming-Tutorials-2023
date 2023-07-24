#include <stdio.h>
int main()
{
    int a = 10;
    {
        // int a = 45;
        printf("inside 1st scope inside main a=%d\n", a); // 10
        {
            int a = 45;
            printf("inside 2nd scope inside main a=%d\n", a); // 45
            {
                int a = 87;
                printf("inside 3rd scope inside main a=%d\n", a); // 87
            }
        }
        printf("inside 1st scope inside main(2) a=%d\n", a); // 10
    }
    return 0;
}