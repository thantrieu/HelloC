#include <stdio.h>

int main() {
	double a, b, c;
	printf("Nhap vao ba canh tam giac: ");
	scanf("%lf%lf%lf", &a, &b, &c);
	if (a <= 0 || b <= 0 || c <= 0) {
		puts("Vui long nhap cac so duong");
	}
	else {
		// tam giác đều
		if (a == b && b == c) {
			puts("Tam giac deu");
		}
		// tam giác cân
		else if ((a == b && b != c) || (b == c && c != a)
			|| (a == c && c != b)) {
			puts("Tam giac can");
		}
		// tam giác vuông
		else if ((a * a + b * b == c * c) || (a * a + c * c == b * b)
			|| (b * b + c * c == a * a)) {
			puts("Tam giac vuong");
		}
		// tam giác vuông cân
		else if ((a == b && b != c && 2 * a * a == c * c)
			|| (b == c && c != a && 2 * b * b == a * a)
			|| (a == c && c != b && 2 * c * c == b * b)) {
			puts("Tam giac vuong can");
		}
		// tam giác thường
		else {
			puts("Tam giac thuong");
		}
	}
}