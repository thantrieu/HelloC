#include <stdio.h>
#include <ctype.h>
#include <string.h>

void toUpper(char* str) {
	for (size_t i = 0; i < strlen(str); i++)
	{
		str[i] = toupper(str[i]);
	}
}

int main() {
	char c = '\t';

	/*printf("\'%c\' la ki tu hoa ? %d\n", c, isupper(c));
	printf("\'%c\' la ki tu thuong ? %d\n", c, islower(c));
	printf("\'%c\' la ki tu so ? %d\n", c, isdigit(c));
	printf("\'%c\' la ki tu chu cai ? %d\n", c, isalpha(c));
	printf("\'%c\' la ki tu chu cai hoac chu so ? %d\n", c, isalnum(c));
	printf("\'%c\' la ki tu dieu khien ? %d\n", c, iscntrl(c));*/

	char x[] = { 'j', 'k', 'l', '\0' };
	toUpper(x);
	printf("Sau khi viet hoa: %s", x);

	int n = 100;
	printf("%s", (n >= 0) ? "So duong" : "So am");

	char str[20];
	scanf("%19[^\n]s", str);
	printf("%s", str);

	return 0;
}