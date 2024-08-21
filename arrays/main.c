#include <stdio.h>

int main()
{
    int numbers[10];

    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;
    numbers[5] = 60;
    numbers[6] = 70;

    printf("The 7th number in the array is %d\n", numbers[6]);

    int a[3][4] = {
        {0, 1, 2, 3},  /*  initializers for row indexed by 0 */
        {4, 5, 6, 7},  /*  initializers for row indexed by 1 */
        {8, 9, 10, 11} /*  initializers for row indexed by 2 */
    };

    printf("The number on the 3rd row and 4th column is %d\n", a[2][3]);
}