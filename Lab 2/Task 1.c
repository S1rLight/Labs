#include <stdio.h>
#include <limits.h>

int main(void){
    int x;
    printf("Enter x: ");
    scanf("%d", &x);

    if (x < 1){
        printf("Wrong len");
        return 1;
    }

    int M[x];
    printf("Enter digits:\n");

    for (int i = 0; i < x; i++){
        scanf("%d", &M[i]);
    }

    int cnt = 0;
    double average;

    for (int i = 0; i < x; i++){
        cnt += M[i];
    }

    average = (double)cnt / x;

    int min = INT_MAX;
    int index = -1;
    int counter = 0;

    for (int i = 0; i < x; i++){
        if (M[i] < average){
            counter++;
        }
        if (M[i] > 0 && M[i] < min){
            min = M[i];
            index = i;
        }
    }
    printf("MIN: %d\nMIN_INDEX: %d\nCNT_MNI_NUMBERS: %d", min, index, counter);
    return 0;

}