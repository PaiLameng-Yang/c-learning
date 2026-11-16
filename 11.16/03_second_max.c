#include <stdio.h>
#include <limits.h>
int main(void){
    int n;
    if (scanf("%d", &n) != 1) return 1;
    if (n < 0 || n > 50) return 1;
    if (n < 2) { printf("none\n"); return 0; }
    int arr[50];
    int max1 = INT_MIN, max2 = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) return 1;
        if (arr[i] > max1) { max2 = max1; max1 = arr[i]; }
        else if (arr[i] > max2) { max2 = arr[i]; }
    }
    printf("%d\n", max2);
    return 0;
}
