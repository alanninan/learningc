#include <stdio.h>

int main()
{
    int a = 1;
    int *pointer_to_a = &a;

    a += 1;
    *pointer_to_a += 1;

    printf("The value of a is now %d\n", a);

    return 0;
}