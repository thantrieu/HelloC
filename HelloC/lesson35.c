#include <stdio.h>
#include <stdlib.h>

int main() {
	int age[] = {1,2,3,4,5};
	int* aPtr = age;
	int* bPtr = &age[2];

	printf("%d", bPtr - aPtr);

	//size_t n;
	//puts("String length: ");
	//scanf("%u", &n);

	//// cap phat dong:

	//name = (char*)malloc(n * sizeof(char));

	//puts("Your age: ");
	//scanf("%d", &age);
	//// doc bo ki tu thua
	////char x;
	//scanf("%*c");

	//puts("Your full name: ");
	//gets(name);

	//printf("Hello %s, you are %d years old.\n", name, age);
	//// giai phong bo nho
	//free(name);

	return 0;
}