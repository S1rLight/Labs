#include <stdio.h>
int main(void)
{
    int a, b;
    double x;

    scanf("%d %d", &a, &b);
    if (a + b == 0){
        printf("Ошибка %d + %d = 0", a, b);
    } else{
        x = 1.0 / (a + b);
        printf("%.2lf", x);
    }
    return 0;

}