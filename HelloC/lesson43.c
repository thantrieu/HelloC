#include <stdio.h>

struct student {
	char id[20];
	char name[40];
	char address[40];
	int age;
	float avgGrades;
};

typedef struct student Student;

void showAge(int age);
void getStudentInfo(Student* s);
void showStudentInfo(Student s);

int main() {
	Student nam;
	getStudentInfo(&nam);
	showStudentInfo(nam);
	//showAge(nam.age);
	return 0;
}

void showAge(int age) {
	printf("Tuoi: %d\n", age);
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

void showStudentInfo(Student s) {
	printf("%-20s%-25s%-25s%-10s%-10s\n", "Ma SV", "Ten SV", "Dia Chi", "Tuoi", "Diem TB");
	printf("%-20s%-25s%-25s%-10d%-10.2f", s.id, s.name, s.address, s.age, s.avgGrades);
}