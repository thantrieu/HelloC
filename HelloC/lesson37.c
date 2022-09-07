#include <stdio.h>
#include <string.h>

int main() {
	char str[] = "What,your,name?,Where are you from?";
	char c = 's';
	char s2[] = "how";
	const char* delim = ", ";

	char* result = strtok(str, delim);
	int i = 1;
	while (result != NULL) {
		printf("Tu thu %d la: %s\n", i, result);
		i++;
		result = strtok(NULL, delim);
	}

	// tim su xuat hien cua c trong str
	//char* result = strchr(str, c);
	/*char* result = strstr(str, s2);
	if (result != NULL) {
		printf("Chuoi ki tu \"%s\" xuat hien tai vi tri \"%s\" cua str\n", s2, result);
	}
	else {
		printf("Chuoi ki tu \"%s\" khong xuat hien trong chuoi str\n", s2);
	}*/
	
	return 0;
}