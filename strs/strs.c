#include <stdio.h>

int main() {
    char *txt = "This is read-only";
    printf("%s\n", txt);

    char txt2 = "This text can be modified";
    printf("%s\n", txt2);

    return 0;
}