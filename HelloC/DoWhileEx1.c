#include <stdio.h>

int main() {
	int a, b;
	int choice = 0;
	
	puts("Enter a, b: ");
	scanf("%d%d", &a, &b);

	do {
		puts("====== MENU ======");
		puts("1. Add");
		puts("2. Subtract");
		puts("3. Mul");
		puts("4. Div");
		puts("0. Exit");
		scanf("%d", &choice);

		switch (choice)
		{
		case 0:
			break;
		case 1:
			printf("%d + %d = %d\n", a, b, a + b);
			break;
		case 2:
			printf("%d - %d = %d\n", a, b, a - b);
			break;
		case 3:
			printf("%d * %d = %d\n", a, b, a * b);
			break;
		case 4:
			printf("%d / %d = %f\n", a, b, (float)a / b);
			break;
		default:
			puts("Please check again.");
			break;
		}
	} while (choice != 0);
}