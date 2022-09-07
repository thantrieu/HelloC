#include <stdio.h>
#include <stdlib.h>

int main() {
	char s1[] = "123o   blabla";
	char s2[] = "**/**/454154 adjfasl;";
	char s3[] = "3.1415926 hahaha ";

	/*char* remain;
	long res = strtol(s1, &remain, 32);
	printf("Ket qua chuyen doi: %ld, phan con lai: %s\n", res, remain);*/

	int x = 12534665;
	char resultBase2[100];
	_itoa(x, resultBase2, 2);
	printf("Ket qua chuyen doi: %s\n", resultBase2);

	/*int iNumber1 = atoi(s1);
	int iNumber2 = atoi(s2);
	int iNumber3 = atoi(s3);

	char* remain;
	double dNumber1 = strtod(s1, &remain);
	printf("Gia tri double sau chuyen doi: %lf, Phan con lai: %s\n", dNumber1, remain);

	double dNumber2 = strtod(s2, &remain);
	printf("Gia tri double sau chuyen doi: %lf, Phan con lai: %s\n", dNumber2, remain);

	double dNumber3 = strtod(s3, &remain);
	printf("Gia tri double sau chuyen doi: %lf, Phan con lai: %s\n", dNumber3, remain);*/

	/*printf("Chuyen doi chuoi s1 sang int: %d\n", iNumber1);
	printf("Chuyen doi chuoi s2 sang int: %d\n", iNumber2);
	printf("Chuyen doi chuoi s3 sang int: %d\n", iNumber3);*/

	return 0;
}