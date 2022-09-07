#include <stdio.h>

int main() {
	int n;
	int sum = 0;
	int count = 0;
	float avgNum = 0;

	puts("Enter n > 0: ");
	scanf("%d", &n);

	int i;
	for (i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			sum += i;
			count++;
		}
	}

	if (count > 0) {
		avgNum = (float)sum / count;
	}

	printf("Avg event number: %f\n", avgNum);
}