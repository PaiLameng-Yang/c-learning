#include <stdio.h>
int main(void){
	float height;
	
	printf("Enter a height in centimeters:");
	scanf("%f",&height);
	
	while (height > 0) {
        int feet = height / 30.48;    				//英尺=整数部分(厘米÷30.48)
        float inch  = (height / 2.54) - (feet * 12);    //英寸=(厘米÷2.54)-(英尺×12)
        printf("%.1f cm = %d feet, %.1f inches\n",height,feet,inch);

        printf("Enter a height in centimeters (<= 0 to quit):");
        scanf("%f", &height);
    }
	
	printf("bye\n");
	
	return 0;
}
