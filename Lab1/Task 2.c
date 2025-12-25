#include <stdio.h>

int main(void)
{   
    while (1){
        int x, k;
        scanf("%d", &x);

        if (x == 999){
            break;
        } else if (x <= 12 && x >= 1){
            k = (x - 1) / 3 + 1;
            printf("%d\n", k);
        } else{
            printf("Wrong num of month, enter again:\n");
            continue;
        }
    }
    

    return 0;
}