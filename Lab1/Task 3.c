 #include <stdio.h>

 int main(void){
    int X, m;
    double cnt = 0.0;

    printf("Enter: X m: ");
    scanf("%d %d", &X, &m);

    if (X - 1 == 0 || m < 0){
        printf("Wrong digits\n");
        return 1;
    }

    for (int i = 2; i <= m; i += 2){
        cnt += (i * (X + 5)) / (X - 1);
        printf("%.2lf\n", cnt);
    }
 }