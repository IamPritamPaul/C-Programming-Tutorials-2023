#include <stdio.h>
// bdw global variables is initialised by 0 by default
int a;
void func1()
{
    printf("\n********************************\n\tInside Func1\n********************************\n");
    printf("a = %d\n", a); // 0
    a = 20;                // global variable a =20
}
void func2()
{
    printf("\n********************************\n\tInside Func2\n********************************\n");
    printf("a = %d\n", a); // 20
    int a = 45;
    printf("Local a = %d\n", a); // 45
    a *= 2;
    printf("After modifying a = %d\n", a); // 90
}
void func3()
{
    int a = 34;
    printf("\n********************************\n\tInside Func3\n********************************\n");
    printf("a = %d\n", a); // 34
    {
        extern int a;
        printf("extern a = %d\n", a); // 20
    }
}
int main()
{
    printf("\n********************************\n\tInside Main\n********************************\n");
    int a = 10;
    printf("a = %d\n", a); // 10
    func1();
    func2();
    func3();
    return 0;
}