#include <stdio.h>
int main(void){
	int KuaTuo;
	double num;
	
	printf("输入水的夸脱数："); 
	scanf("%d",&KuaTuo);
	
	num = KuaTuo * 950.0 / (3e-23);
	
	printf("水分子的数量为：%e\n",num);
	
	return 0;
}
