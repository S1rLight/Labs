#include <stdio.h>

#define N 5
#define M 6

void count_zeros_in_odd_rows(int *matrix, int *result) {
    int res_index = 0;
    for (int i = 0; i < N; i += 2) {          
        int count = 0;
        for (int j = 0; j < M; j++) {         
            if (matrix[i * M + j] == 0) {     
                count++;
            }
        }
        result[res_index++] = count;
    }
}

int main(void) {
    int data[N][M] = {
        { 0,  2,  0,  5,  0,  8},
        { 1,  0,  3,  0,  7,  9},
        {-1,  0,  0,  0,  4,  0},
        { 2,  5,  1,  3,  0,  6},
        { 0,  0,  0,  0,  0,  0}
    };

    int *matrix = &data[0][0];  

    int odd_count = (N + 1) / 2;
    int zeros[odd_count];

    count_zeros_in_odd_rows(matrix, zeros);  
    for (int i = 0; i < odd_count; i++) {
        printf("Строка %d: %d нулей\n", 2*i + 1, zeros[i]);
    }

    return 0;
}
