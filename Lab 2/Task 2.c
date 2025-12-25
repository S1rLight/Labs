#include <stdio.h>
#include <limits.h>

#define ROWS 8
#define COLS 12

int main(void) {
    
    int matrix[ROWS][COLS] = {
        { 5,  2,  8,  0,  3,  7,  1,  9,  4,  6,  2,  5},
        {-1,  0,  3,  2,  0,  8,  4,  1,  7,  3,  9,  0},
        { 2, -3,  7,  5,  1,  0,  6,  2,  8,  4,  0,  1},
        { 0,  4,  1,  9,  2,  5,  0,  3,  1,  7,  6,  2},
        { 3,  1,  0, -2,  8,  4,  2,  0,  5,  9,  3,  7},
        { 7,  2,  5,  1,  0,  6,  3,  8,  2,  0,  4,  1},
        { 1,  0, -1,  4,  3,  2,  9,  5,  0,  1,  8,  6},
        { 6,  3,  2,  0,  7,  1,  4, 10,  3,  2,  5,  0}
    };

    

    int max_upper = INT_MIN;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < 8; j++) {  
            if (matrix[i][j] > max_upper) {
                max_upper = matrix[i][j];
            }
        }
    }

    int min_lower = INT_MAX;
    for (int i = 4; i < ROWS; i++) {
        for (int j = 7; j < 12; j++) {
            if (matrix[i][j] < min_lower) {
                min_lower = matrix[i][j];
            }
        }
    }

    int zeros_in_odd[4];

    for (int i = 1; i < ROWS; i += 2) {  
        int count = 0;
        for (int j = 0; j < COLS; j++) {
            if (matrix[i][j] == 0) {
                count++;
            }
        }
        zeros_in_odd[(i - 1) / 2] = count;
    }

    printf("Max_up: %d\n", max_upper);
    printf("Min_down: %d\n", min_lower);
    printf("Количество нулей в нечётных строках:\n");
    printf("  Строка 1: %d\n", zeros_in_odd[0]);
    printf("  Строка 3: %d\n", zeros_in_odd[1]);
    printf("  Строка 5: %d\n", zeros_in_odd[2]);
    printf("  Строка 7: %d\n", zeros_in_odd[3]);

    return 0;
}