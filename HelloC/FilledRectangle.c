#include <stdio.h>

int main() {
	int height, width;
	puts("Enter height, width of rectangle: ");
	scanf("%d%d", &height, &width);

	// ve hinh chu nhat dac *
	int i, j;
	for (i = 1; i <= height; i++)
	{
		for (j = 1; j <= width; j++)
		{
			printf(" * ");
		}
		printf("\n");
	}
}