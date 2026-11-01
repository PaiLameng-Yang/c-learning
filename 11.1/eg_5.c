#include <stdio.h>
int main(void){
	int num;
	float PinTuo,AngSi,TangShao,ChaShao;
	
	printf("请输入杯数：");
    scanf("%d", &num);
	
	PinTuo = num / 2.0; 
    AngSi = PinTuo * 16.0; 
    TangShao = AngSi * 2.0; 
    ChaShao = TangShao * 3.0;
    
    printf("%d 杯相当于:\n", num);
    printf("%.2f 品脱\n", PinTuo);
    printf("%.2f 盎司\n", AngSi);
    printf("%.2f 大汤勺\n", TangShao);
    printf("%.2f 茶勺\n", ChaShao);
	
	return 0;
}
