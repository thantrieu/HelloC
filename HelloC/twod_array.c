#include <stdio.h>

int main() {
	int a[50][50];
	float grades[10][50];
	char friends[20][40];

	int matrix[3][4] = {
		{0, 1, 2, 3},
		{4, 5, 6, 7},
		{7, 8, 9, 90}
	};

	//matrix[0][0] = 100;

	int x = matrix[0][3];

	//printf("matrix[2][2] = %d", matrix[2][2]);

	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++)
		{
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}

	return 0;
}