#include <stdio.h>
int main(void){
	char name[40];
	float cash;
	
	scanf("%s",name);
	scanf("%f",&cash);
	printf("The %s family just may be $%.2f richer!\n",name,cash);
	
	return 0;
} 
