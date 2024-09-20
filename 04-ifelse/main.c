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
