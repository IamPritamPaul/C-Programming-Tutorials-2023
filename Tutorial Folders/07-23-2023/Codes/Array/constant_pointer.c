#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    printf("%d\t", arr);
    printf("%d\t", ++arr); // lvalue error
    // arr = arr + 1;
    // LHS=RHS
    return 0;
}