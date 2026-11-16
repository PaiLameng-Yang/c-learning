#include <stdio.h>
int main(void){
    int n;
    if (scanf("%d", &n) != 1) return 1;
    if (n < 0 || n > 50) return 1;
    if (n == 0) { printf("empty\n"); return 0; }
    int arr[50];
    for (int i = 0; i < n; i++) {
        int seen = 0;
        if (scanf("%d", &arr[i]) != 1) return 1;
        for (int j = 0; j < i; j++)
            if (arr[j] == arr[i]) { seen = 1; break; }
        if (!seen) printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
