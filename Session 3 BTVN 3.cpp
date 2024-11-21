#include <stdio.h>

int main(){
	const float PI = 3.14;
	float banKinh, dienTich, chuVi;
	printf("Moi ban nhap ban kinh hinh tron: ");
	scanf("%f", &banKinh);
	dienTich = banKinh * banKinh * PI;
	chuVi = banKinh * 2 * PI;
	printf("Chu vi hinh tron la : %.2f\n", chuVi);
	printf("Dien tich hinh tron la : %.2f", dienTich);
	return 0;
}
