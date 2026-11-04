#include <stdio.h>

void Temperatures(double h);

int main(void) {
    double h;

    printf("请输入华氏温度：");
    while (scanf("%lf", &h) == 1) {
        Temperatures(h);
        printf("请输入华氏温度：（输入非数字结束）");
    }

    return 0;
}

void Temperatures(double h) {
    const double K_OFFSET = 273.15;

    double celsius = 5.0 / 9.0 * (h - 32.0);
    double kelvin  = celsius + K_OFFSET;

    printf("%.2f %.2f %.2f\n", h, celsius, kelvin);
}
