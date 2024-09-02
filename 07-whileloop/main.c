#include <stdio.h>

int main() {
    int x = 0;
    unsigned int lmt;

    printf("Enter no. of times to print `Hello World!`: ");
    scanf("%d", &lmt);

    while (x < lmt) {
        printf("Hello World!\n");
        x++;
    }

    return 0;
}