#include <stdio.h>

int main() {
    int a = 1;
    int b = 2;

    if (a < b) {
        printf("a is lesser than b\n");
    } else if (a == b) {
        printf("a is equal to b\n");
    } else {
        printf("a is greater than b\n");
    }

    int x = 1;
    int y = 2;
    int z = 3;

    if (x < y && z > y) {
        printf("x is lesser than y AND z is greater than y\n");
    }

    if (x < y || z > y) {
        printf("x is lesser than y OR z is greater than y\n");
    }

    return 0;
}