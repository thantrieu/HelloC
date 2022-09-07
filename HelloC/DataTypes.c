#include <stdio.h>
#include <limits.h>

//#define PI 3.1415926
const double PI = 3.1415926;

int main() {
	
	PI = 3.15; // error

	printf("Kich thuoc kieu long long: %d\n", sizeof(long long));
	printf("Gia tri max cua long long: %lld\n", LLONG_MAX);
}