#include <stdio.h>
#include <string.h>

int main() {
	char name[100] = "Trung";
	char hung[40] = "Trun Viet Hung";
	/*strncat(name, hung, 6);

	printf("Noi dung chuoi name = %s\n", name);*/

	printf("strcmp(name, hung) = %d\n", strcmp(hung, name, 4));

	return 0;
}