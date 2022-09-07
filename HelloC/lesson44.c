#include <stdio.h>

int main() {
	FILE* fInput; // con tro doc file
	FILE* fOutput; // con tro ghi file 

	char fileName[] = "C:\\Users\\trieu\\OneDrive\\Desktop\\input.txt";

	fInput = fopen(fileName, "r+");
	if (fInput != NULL) {
		puts("Mo file thanh cong");

		fclose(fInput);
	}
	else {
		puts("Mo file that bai. Hay kiem tra lai.");
	}

	return 0;
}