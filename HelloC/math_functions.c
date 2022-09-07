#include <stdio.h>
#include <math.h>

int main() {
	int x = -30;

	int y = abs(x);

	float f = 3.481592;

	// sin(x)
	printf("sin(x) = %lf\n", sin(x*3.141592/180));
	printf("cos(x) = %lf\n", cos(x * 3.141592 / 180));

	// lam tron:
	//printf("lam tron f voi ham round(): %lf", round(f));

	//printf("can bac hai cua y = %d\n", (int)sqrt(y));

	return 0;
}