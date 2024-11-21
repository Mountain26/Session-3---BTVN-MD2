#include <stdio.h>

int main() {
	int number, sum = 0;
	printf("Nhap vao mot so nguyen co 4 chu so: ");
	scanf("%d", &number);
	sum += number % 10;
	number /= 10;
	sum += number % 10;
	number /= 10;
	sum += number % 10;
	number /= 10;
	sum += number % 10;
	printf("Tong cac chu so la: %d\n", sum);
}
