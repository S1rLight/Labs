#include <stdio.h>
#include <limits.h>

#define ROWS 8
#define COLS 12

int find_max_upper(int *matrix) {
    int max_val = INT_MIN;
    for (int i = 0; i < 4; i++) {          
        for (int j = 0; j < 8; j++) {      
            int value = matrix[i * COLS + j];
            if (value > max_val) {
                max_val = value;
            }
        }
    }
    return max_val;
}

int find_min_lower(int *matrix) {
    int min_val = INT_MAX;
    for (int i = 4; i < ROWS; i++) {       
        for (int j = 8; j < COLS; j++) {   
            int value = matrix[i * COLS + j];
            if (value < min_val) {
                min_val = value;
            }
        }
    }
    return min_val;
}

int main(void) {
    int data[ROWS][COLS] = {
        { 5,  2,  8,  0,  3,  7,  1,  9,  4,  6,  2,  5},
        {-1,  0,  3,  2,  0,  8,  4,  1,  7,  3,  9,  0},
        { 2, -3,  7,  5,  1,  0,  6,  2,  8,  4,  0,  1},
        { 0,  4,  1,  9,  2,  5,  0,  3,  1,  7,  6,  2},
        { 3,  1,  0, -2,  8,  4,  2,  0,  5,  9,  3,  7},
        { 7,  2,  5,  1,  0,  6,  3,  8,  2,  0,  4,  1},
        { 1,  0, -1,  4,  3,  2,  9,  5,  0,  1,  8,  6},
        { 6,  3,  2,  0,  7,  1,  4, 10,  3,  2,  5,  0}
    };

    int *matrix = &data[0][0];

    int max_upper = find_max_upper(matrix);
    int min_lower = find_min_lower(matrix);

    printf("Max_up: %d\n", max_upper);
    printf("Min_down: %d\n", min_lower);

    return 0;
}