#include <stdio.h>

void cubic(double n);

int main(void){
	double n;
	
	printf("请输入一个double类型的数：");
	scanf("%lf",&n);
	cubic(n);
	
	return 0;
}

void cubic (double n){
	printf("%f\n", n * n * n);
}
