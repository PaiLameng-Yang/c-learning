#include <stdio.h>
int main(void){
	float speed,size,time;
	
	printf("请输入下载速度（Mb/s）："); 
	scanf("%f",&speed);
	printf("请输入文件大小（MB）：");
	scanf("%f",&size);
	
	time = 8*size / speed;
	
	printf("At %.2f megabits per second, a file of %.2f magabytes\n",speed,size);
	printf("downloads in %.2f seconds.",time);
	
	return 0;
} 
