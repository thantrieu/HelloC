#include <stdio.h>

int main() {
	int n;
	puts("Nhap gia tri so nguyen tu 1-7: ");
	scanf("%d", &n);

	if (n % 2 == 0) {
		puts("n la so chan");
	}
	else {
		puts("n la so le");
	}

	// toan tu ba ngoi
	printf("%s", (n % 2 == 0) ? "n la so chan" : "n la so le");

	/*switch (n)
	{
	case 1:
		puts("Monday");
		break;
	case 2:
		puts("Tuesday");
		break;
	case 3:
		puts("Wednesday");
		break;
	case 4:
		puts("Thursday");
		break;
	case 5:
		puts("Friday");
		break;
	case 6:
		puts("Saturday");
		break;
	case 7:
		puts("Sunday");
		break;
	default:
		puts("Vui long nhap gia tri trong doan [1, 7]");
		break;
	}*/

}