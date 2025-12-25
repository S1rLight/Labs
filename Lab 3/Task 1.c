#include <stdio.h>


int find_first_zero(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            return i;
        }
    }
    return -1;
}

void process_array(int arr[], int size, const char* name) {
    int zero_index = find_first_zero(arr, size);

    if (zero_index == -1) {
        printf("Нулевой элемент в массиве %s не найден.\n", name);
        return;
    }

    printf("Первый нулевой элемент в массиве %s найден на позиции: %d\n", name, zero_index);

    long long sum1 = 0;
    for (int i = 0; i < zero_index; i++) {
        sum1 += arr[i];
    }

    long long sum2 = 0;
    for (int i = zero_index + 1; i < size; i++) {
        sum2 += arr[i];
    }

    printf("Сумма элементов до нуля: %lld\n", sum1);
    printf("Сумма элементов после нуля: %lld\n", sum2);
}

int main(void) {
    #define N1 8
    #define N2 10

    int A[N1] = {3, 7, -2, 0, 5, 1, 0, 4};      
    int B[N2] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 

    process_array(A, N1, "A");
    process_array(B, N2, "B");

    return 0;
}

