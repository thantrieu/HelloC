#include <stdio.h>

int main() {
	int n;
	puts("Enter an integer positive number: ");
	scanf("%d", &n);
	int sum = 0;
	int i;
	for (i = 1; i <= n; i++)
	{
		if (i % 3 != 0) {
			continue; // skip
		}
		sum += i;
	}

	printf("Result = %d\n", sum);
}