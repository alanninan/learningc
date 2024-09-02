#include <stdio.h>

int add(int *num) {
    (*num)++;
    return *num;
}

int main() {
    int x = 0;
    add(&x);
    add(&x);
    printf("%d\n", x);

    return 0;
}
