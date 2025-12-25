#include <stdio.h>

#define N 6   
#define M 8   

double average_middle_rows(int matrix[N][M], int col) {
    if (N <= 2) {
        return 0.0;
    }

    long long sum = 0;
    int count = N - 2;  

    for (int i = 1; i <= N - 2; i++) {
        sum += matrix[i][col];
    }

    return (double)sum / count;
}

int main(void) {
    int matrix[N][M] = {
        { 1,  2,  3,  4,  5,  6,  7,  8},  
        {10, 20, 30, 40, 50, 60, 70, 80}, 
        {11, 21, 31, 41, 51, 61, 71, 81},  
        {12, 22, 32, 42, 52, 62, 72, 82},  
        {13, 23, 33, 43, 53, 63, 73, 83},  
        {99, 99, 99, 99, 99, 99, 99, 99}   
    };



    for (int j = 0; j < M; j++) {
        double avg = average_middle_rows(matrix, j);
        printf("Столбец %d: %.2f\n", j, avg);
    }

    return 0;
}