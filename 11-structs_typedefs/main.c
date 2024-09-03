#include <stdio.h>

typedef struct {
    int x;
    int y;
} point;


void coord(point crds) {
    printf("(%i, %i)\n", crds.x, crds.y);
}

int main() {
    point cd;
    cd.x = 1;
    cd.y = 5;

    coord(cd);
    return 0;
}