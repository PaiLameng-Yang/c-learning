#include <stdio.h>
int main(void){
    int n;
    if (scanf("%d", &n) != 1) return 1;
    if (n < 1 || n > 50) return 1;
    int cnt[10] = {0};
    for (int i = 0; i < n; i++) {
        int x;
        if (scanf("%d", &x) != 1) return 1;
        if (x < 0 || x > 9) return 1;
        cnt[x]++;
    }
    int best = 0;
    for (int i = 1; i < 10; i++)
        if (cnt[i] > cnt[best]) best = i;
    printf("%d\n", best);
    return 0;
}
