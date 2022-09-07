#include <stdio.h>

typedef struct {
	char id[20];
	char name[40];
	char address[40];
	int age;
	float avgGrades;
} Student;

void getStudentInfo(Student* s);
void showStudentInfo(const Student* const s);
void writeToFile(const Student* const s, const char* fileName);
void readFromFile(Student* students, size_t* n, const char* fileName);

int main() {
	const char* fileName = "STUDENT.txt";

	/*
	Student nam;
	getStudentInfo(&nam);
	writeToFile(&nam, fileName);*/

	Student students[100];
	size_t n;
	readFromFile(students, &n, fileName);
	printf("%-20s%-25s%-25s%-10s%-10s\n", "Ma SV", "Ten SV", "Dia Chi", "Tuoi", "Diem TB");
	size_t i;
	for (i = 0; i < n; i++)
	{
		showStudentInfo(&students[i]);
	}

	return 0;
}

void writeToFile(const Student* const s, const char* fileName) {
	FILE* f = fopen(fileName, "a");
	if (f != NULL) {
		fprintf(f, "%s\n%s\n%s\n%d\n%0.2f\n", 
			s->id, s->name, s->address, s->age, s->avgGrades);
		fclose(f);
	}
	else {
		puts("Khong mo duoc file. Hay kiem tra lai.");
	}
}

void readFromFile(Student* students, size_t* n, const char* fileName) {
	FILE* f = fopen(fileName, "r");
	if (f != NULL) {
		size_t i = 0;
		while (!feof(f)) {
			fscanf(f, "%19[^\n]", students[i].id);
			fscanf(f, "%*c%39[^\n]", students[i].name);
			fscanf(f, "%*c%39[^\n]", students[i].address);
			fscanf(f, "%d", &students[i].age);
			fscanf(f, "%f%*c", &students[i].avgGrades);
			if (feof(f)) {
				break;
			}
			i++;
		}
		*n = i;
		fclose(f);
	}
	else {
		puts("Khong mo duoc file. Vui long kiem tra lai.");
	}
}

void getStudentInfo(Student* s) {
	puts("Nhap ma sinh vien: ");
	scanf("%19[^\n]", s->id);
	puts("Nhap ho ten: ");
	scanf("%*c%39[^\n]", s->name);
	puts("Nhap dia chi: ");
	scanf("%*c%39[^\n]", s->address);
	puts("Nhap tuoi: ");
	scanf("%d", &s->age);
	puts("Nhap diem TB: ");
	scanf("%f", &s->avgGrades);
}

void showStudentInfo(const Student* const s) {
	printf("%-20s%-25s%-25s%-10d%-10.2f\n", s->id, s->name, s->address, s->age, s->avgGrades);
}