#include <stdio.h>

int main() {
	int a = 120;
	int b = -500;
	float f = 3.14159f;

	//printf("%-10s%-10s%-15s\n", "a", "b", "f");
	//printf("%+10d\n%+10d%.3f\n", a, b, f);

	/*char c = 'x';
	char name[] = "Tran Van H";

	printf("c = \'%c\'", c);*/

	/*int x;
	char name[20];
	puts("Nhap ten: ");
	scanf("%19[^\n]", name);
	printf("Hello %s\n", name);*/

	/*puts("Nhap vao gia tri so nguyen: ");
	scanf("%5d", &x);
	printf("x = %d\n", x);*/

	// dd/mm/yyyy
	int day, month, year;
	puts("Nhap ngay sinh: dd/mm/yyyy");
	scanf("%d%*c%d%*c%d", &day, &month, &year);

	printf("day = %d\nmonth = %d\nyear = %d\n", day, month, year);
	return 0;
}