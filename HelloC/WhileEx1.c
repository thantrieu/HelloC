#include <stdio.h>

int main() {
	int n = 0;
	while (n != -1) {
		puts("Nhap n # -1. \nNhap -1 de ket thuc");
		scanf("%d", &n);
		printf("Ban vua nhap n = %d\n", n);
	}
}