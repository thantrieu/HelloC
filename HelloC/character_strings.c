#include <stdio.h>
#include <string.h>

int main() {
	/*char c = 'A';
	char x = '*';
	puts("Nhap vao 1 ki tu: ");
	scanf("%c", &c);

	printf("gia tri cua bien c = %c\n", c);*/

	// chuoi 
	char name[20];
	puts("What your name?");
	fgets(name, 20, stdin);
	name[strlen(name) - 1] = '\0';
	//gets(name);
	//scanf("%19[^\n]", name);
	printf("Hello %s!", name);

	return 0;
}