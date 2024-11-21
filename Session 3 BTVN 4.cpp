#include <stdio.h>

int main(){
	float diemToan, diemVan, diemAnh, tongDiem, diemTB;
	printf("Moi ban nhap diem toan cua ban: ");
	scanf("%f", &diemToan);
	printf("Moi ban nhap diem anh cua ban: ");
	scanf("%f", &diemAnh);
	printf("Moi ban nhap diem van cua ban: ");
	scanf("%f", &diemVan);
	tongDiem= diemToan + diemVan + diemAnh;
	diemTB= tongDiem / 3;
	printf("Tong diem 3 mon cua ban la: %.2f\n", tongDiem);
	printf("Trung binh diem 3 mon cua ban la: %.2f", diemTB);
}
