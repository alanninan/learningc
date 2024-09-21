/* Copyright 2024 Alan Ninan Thomas
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   https://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <stdio.h>

int main() {
    float num1, num2, sum, difference, product, quotient;
    int mod;

    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    printf("Sum: %.2f\n", sum);
    printf("Difference: %.2f\n", difference);
    printf("Product: %.2f\n", product);

    if (num2 != 0) {
        quotient = num1 / num2;
        printf("Quotient: %.2f\n", quotient);
    } else {
        printf("Division by zero is not allowed\n");
    }

    if ((int)num2 != 0) {
        mod = (int)num1 % (int)num2;
        printf("Modulus: %d\n", mod);
    } else {
        printf("Modulus by zero is not allowed\n");
    }
    return 0;
}
