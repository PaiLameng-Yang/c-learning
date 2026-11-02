#include <stdio.h>
#include <string.h>
int main(void){
	char Fname[40];
	char Lname[40];
	
	printf("«Î ‰»Î√˚£∫");
	scanf("%s",Fname);
	printf("«Î ‰»Î–’£∫");
	scanf("%s",Lname);
	
	int lenF = strlen(Fname);
	int lenL = strlen(Lname);
	
	printf("%s %s\n",Fname,Lname);
	printf("%*u %*u\n",lenF, lenF, lenL, lenL);
	
	printf("%s %s\n",Fname,Lname);
	printf("%-*u %-*u\n",lenF, lenF, lenL, lenL);
	
	return 0;
}
