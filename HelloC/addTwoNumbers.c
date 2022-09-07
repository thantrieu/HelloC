// chuong trinh cong hai so nguyen
#include <stdio.h>

int main() {
	// khai bao bien
	int number1;
	int number2;

	// nhap du lieu vao, luu o cac bien
	puts("Nhap so nguyen thu nhat: ");
	scanf("%d", &number1);

	puts("Nhap so nguyen thu hai: ");
	scanf("%d", &number2);

	// cong hai so nguyen
	int sum = number1 + number2;

	// hien thi kq ra man hinh
	printf("%d + %d = %d\n", number1, number2, sum);
}
