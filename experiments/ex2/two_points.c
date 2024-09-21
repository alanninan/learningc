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
#include <math.h>

int main() {
    float x1, y1, x2, y2, distance;

    // input coordinates
    printf("Enter coordinates of first point (x1, y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Enter coordinates of second point (x2, y2): ");
    scanf("%f %f", &x2, &y2);

    distance = sqrt((x2-x1) * (x2-x1) + (y2-y1) * (y2-y1));
    printf("distance between two points: %.2f\n", distance);
    return 0;
}
