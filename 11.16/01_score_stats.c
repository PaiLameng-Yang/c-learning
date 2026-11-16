#include <stdio.h>
int main(void){
    int n;
    if (scanf("%d", &n) != 1) return 1;
    if (n == 0) { printf("empty\n"); return 0; }
    if (n < 0 || n > 50) return 1;
    int score[50];
    for (int i = 0; i < n; i++)
        if (scanf("%d", &score[i]) != 1) return 1;
    int max = score[0], min = score[0], pass = 0;
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        if (score[i] > max) max = score[i];
        if (score[i] < min) min = score[i];
        if (score[i] >= 60) pass++;
        sum += score[i];
    }
    printf("max = %d  min = %d\n", max, min);
    printf("avg = %.1f\n", sum / n);
    printf("pass = %d  fail = %d\n", pass, n - pass);
    return 0;
}
