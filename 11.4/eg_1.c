#include <stdio.h>
int main(void) {
    int total;

    printf("请输入天数（输入非正值结束）：");
    scanf("%d", &total);

    while (total > 0) {
        int weeks = total / 7;
        int days  = total % 7;
        printf("%d days are %d weeks, %d days.\n", total, weeks, days);

        printf("请输入天数（输入非正值结束）：");
        scanf("%d", &total);
    }

    return 0;
}
