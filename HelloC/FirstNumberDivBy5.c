#include <stdio.h>
// gia tri dau tien chia het cho 5 trong doan [a, b]

int main() {
	int a, b;
	puts("Enter two integer numbers a < b: ");
	scanf("%d%d", &a, &b);

	int i;
	int result;
	for (i = a; 
		i <= b; 
		i++)
	{
		if (i % 5 == 0) {
			result = i;
			break;
		}
	}

	printf("Result = %d\n", result);
}