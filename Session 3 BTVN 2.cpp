#include <stdio.h>

int main(){
	float doC, doF;
	printf("Nhap nhiet do theo do C: ");
	scanf("%f", &doC);
	doF = (doC * 9 / 5	) + 32;
	printf("Nhiet do theo do F la %f", doF);
	return 0;
}
