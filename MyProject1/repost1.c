#include <stdio.h>

// tạo struct mô tả thông tin sinh viên
typedef struct {
    char id[20];      // ma sv
    char name[30];    // ho ten
    char address[40]; // dia chi
    int age;          // tuoi
    float avgGrades;  // diem trung binh
} Student;             // luon ket thuc struct voi dau ;

// ham nguyen mau
void getStudentInfo(Student* s);
void showInfo(const Student* const s);

// ham main
int main() {
    Student linh;
    getStudentInfo(&linh);
    puts("==============================");
    showInfo(&linh);

    return 0;
}

// ham nhap du lieu cho student
void getStudentInfo(Student* s) {
    printf("%s", "Student ID: ");
    scanf("%19s", s->id);

    printf("%s", "Full name: ");
    scanf("%*c%29[^\n]", s->name);

    printf("%s", "Address: ");
    scanf("%*c%39[^\n]", s->address);

    printf("%s", "Age: ");
    scanf("%d", &(s->age));

    printf("%s", "Average grades: ");
    scanf("%f", &(s->avgGrades));
}

// hien thi thong tin cua student
void showInfo(const Student* const s) {
    printf("ID: %s\n", s->id);
    printf("Full name: %s\n", s->name);
    printf("Address: %s\n", s->address);
    printf("Age: %d\n", s->age);
    printf("Average grades: %.2f\n", s->avgGrades);
}