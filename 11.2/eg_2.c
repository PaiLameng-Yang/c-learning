#include <stdio.h>
#include <string.h>
int main(void){
	char name[40];
	
	printf("ÇëÊäÈëÃû×Ö£º");	
	scanf("%s",name);
	
	int width =(int)strlen(name) + 3;
	
	printf("\"%s\"\n",name);
	printf("\"%20s\"\n",name);
	printf("\"%-20s\"\n",name);
	printf("%-*s\n", width, name);
	
	return 0;
}
