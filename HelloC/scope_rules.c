#include <stdio.h>

// bien toan cuc:
int x = 5;
void area(int w, int h);
void showX();
void swap(int a, int b);

int main() {
	showX();
	printf("x = %d\n", x);
	return 0;
}

void swap(int a, int b) {
	if (a != b) { // pham vi khoi
		int tmp = a; 
		a = b;
		b = tmp;
	}
}

void showX() {
	printf("x = %d\n", x);
	x++; // su dung bien toan cuc
}

void area(int w, int h) {
	return x * h;
}