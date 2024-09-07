/* write a program to take two numbers
 * from the user and add them.
 */

#include <stdio.h>

int main() {
    int x, y;
    printf("Enter first number: ");
    scanf("%d", &x);

    printf("Enter second number: ");
    scanf("%d", &y);

    printf("The sum of the two numbers: %d\n", x+y);

    return 0;
}