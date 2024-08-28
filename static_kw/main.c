#include <stdio.h>


int runner()
{
    static int count = 0;
    count++;
    return count;
}

int main()
{
    printf("%d ", runner());
    printf("%d\n", runner());
    return 0;
}