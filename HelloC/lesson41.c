#include <stdio.h>

struct student {
	char id[20];
	char name[40];
	char address[40];
	int age;
	float avgGrades;
};

struct employee {
	char id[20];
	char name[40];
	char role[40];
	float salary;
};

int main() {
	struct student lan = {
		"B25DCCN123",
		"Tran Nhu Lan",
		"Ho Chi Minh City",
		20,
		3.75f
	};

	printf("Diem trung binh cua %s la %.2f\n", lan.name, lan.avgGrades);

	struct student nam;
	puts("Nhap tuoi: ");
	scanf("%d", &nam.age);

	puts("Nhap ten: ");
	scanf("%*c%39[^\n]", nam.name);

	printf("Hello %s, you are %d years old.\n", nam.name, nam.age);

	return 0;
}