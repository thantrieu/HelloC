/*
	Tao menu cho phep thuc hien cac chuc nang:
	1. Khoi tao 200 sinh vien rong, viec khoi tao 
	   chi thuc hien duy nhat 1 lan khi file chua ton tai
	2. Them moi mot sinh vien vao file, 3 so cuoi ma sinh vien
	   la so thu tu ban ghi, tu 1 den 200
	3. Hien thi danh sach sinh vien ra man hinh
	4. Cap nhat diem sinh vien theo ma sinh vien
	5. Thoat chuong trinh
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
void initFile(const char* fileName);
void updateStudent(const Student* const s, const char* fileName);
int findIndexFromId(const char* id);

int main() {
	int choice = 0;
	Student students[200];
	size_t n; // so sinh vien thuc te trong danh sach
	const char* fileName = "STUDENT_INFO.DAT";
	// doc danh sach
	readFromFile(students, &n, fileName);

	do {
		puts("===== MENU =====");
		puts("1. Khoi tao 200 sinh vien rong.");
		puts("2. Them moi 1 sinh vien.");
		puts("3. Hien thi danh sach sinh vien trong file.");
		puts("4. Cap nhat diem sinh vien theo ma.");
		puts("0. Thoat chuong trinh.");
		puts("Xin moi ban chon: ");
		scanf("%d", &choice);

		switch (choice)
		{
		case 0:
			puts("Xin chao va hen gap lai!");
			break;
		case 1:
		{
			FILE* f = fopen(fileName, "r");
			if (f != NULL) {
				// do nothing
			}
			else { // khoi tao
				initFile(fileName);
			}
			break;
		}
		case 2: {
			scanf("%*c");
			Student s;
			getStudentInfo(&s);
			int index = findIdIndex(students, n, s.id);
			if (index != -1) {
				puts("Sinh vien da ton tai. Vui long nhap sinh vien moi");
			}
			else {
				writeToFile(&s, fileName);
			}
			break;
		}
		case 3: {
			readFromFile(students, &n, fileName);
			printf("\n%s\n", "========================================");
			printf("%-20s%-25s%-25s%-10s%-10s\n", "Ma SV", "Ten SV", "Dia Chi", "Tuoi", "Diem TB");
			size_t i;
			for (i = 0; i < n; i++)
			{
				showStudentInfo(&students[i]);
			}
			break;
		}
		case 4: {
			int findIdIndex(const Student * students, const size_t n, const char* id);
			char id[20];
			puts("Nhap ma sv can cap nhat diem: ");
			scanf("%19s", id);
			int index = findIdIndex(students, n, id);
			if (index == -1) {
				puts("Sinh vien nay khong ton tai. Vui long kiem tra lai.");
			}
			else {
				puts("Nhap diem: ");
				scanf("%f", &students[index].avgGrades);
				updateStudent(&students[index], fileName);
			}
			break;
		}
		default:
			puts("Ban da nhap sai chuc nang. Vui long kiem tra lai.");
			break;
		}
	} while (choice != 0);

	return 0;
}

int findIdIndex(const Student* students, const size_t n, const char* id) {
	for (size_t i = 0; i < n; i++)
	{
		if (strcmp(id, students[i].id) == 0) {
			return i;
		}
	}
	return -1; // chi so khong ton tai trong mang
}

void initFile(const char* fileName) {
	FILE* f = fopen(fileName, "wb");
	if (f != NULL) {
		Student s = {"", "", "", 0, 0};
		for (size_t i = 1; i <= 200; i++)
		{
			fwrite(&s, sizeof(Student), 1, f);
		}
		fclose(f);
	}
	else {
		puts("Khong tao duoc file.");
	}
}

void updateStudent(const Student* const s, const char* fileName) {
	writeToFile(s, fileName);
}

int findIndexFromId(const char* id) {
	// B25DCCN123 - n
	char number[4];
	int j = 0;
	int n = strlen(id);
	for (int i = n - 3; i < n; i++)
	{
		number[j] = id[i];
		j++;
	}
	number[3] = '\0';
	return atoi(number) - 1;
}

void writeToFile(const Student* const s, const char* fileName) {
	FILE* f = fopen(fileName, "rb+");
	if (f) {
		int index = findIndexFromId(s->id);
		fseek(f, index * sizeof(Student), SEEK_SET);
		fwrite(s, sizeof(Student), 1, f);
		fclose(f);
	}
	else {
		puts("Khong mo duoc file. Vui long kiem tra lai.");
	}
}

void readFromFile(Student* students, size_t* n, const char* fileName) {
	FILE* f = fopen(fileName, "rb");
	if (f) {
		size_t i = 0;
		while (!feof(f)) {
			fread(&students[i], sizeof(Student), 1, f);
			if (students[i].age > 0 && students[i].age < 200) {
				i++;
			}
			if (feof(f)) {
				break;
			}
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