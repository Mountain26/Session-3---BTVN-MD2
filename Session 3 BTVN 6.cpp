#include <stdio.h>

int main(){
	float doDai, chieuCao;
	printf("Moi ban nhap do dai canh hinh tam giac: ");
	scanf("%f", &doDai);
	printf("Moi ban nhap chieu cao canh hinh tam giac: ");
	scanf("%f", &chieuCao);
	float dienTich = chieuCao * doDai / 2;
	printf("Dien tich cua hinh tam giac la: %f", dienTich);
	return 0;
} 
