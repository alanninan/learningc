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
