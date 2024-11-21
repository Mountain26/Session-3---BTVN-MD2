#include <stdio.h>

int main(){
	int number, soDaonguoc = 0;
	printf("Nhap vao mot so nguyen co 4 chu so: ");
	scanf("%d", &number);
	soDaonguoc += (number % 10) * 1000;
	number /= 10;
	soDaonguoc += (number % 10) * 100;
	number /= 10;
	soDaonguoc += (number % 10) * 10;
	number /= 10;
	soDaonguoc += number;
	printf("So nghich dao la: %d\n", soDaonguoc);
	return 0;
}
