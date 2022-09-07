#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rollDices(); // khai bao nguyen mau

enum Status{ CONTINUE, WON, LOST };

int main() {
	// gieo bo so random:
	srand(time(NULL));

	int myPoint = 0; // diem cua nguoi choi
	enum Status gameStatus; // trang thai choi game
	int sum = rollDices();// lay ket qua lan tung dau tien

	// danh gia:
	switch (sum)
	{
	case 7:
	case 11:
		gameStatus = WON; // thang game
		break;

	case 2:
	case 3:
	case 12: // thua game
		gameStatus = LOST;
		break;

	default: // diem cua nguoi choi
		gameStatus = CONTINUE;
		myPoint = sum;
		printf("Point is: %d\n", myPoint);
		break;
	}

	while (CONTINUE == gameStatus) {
		sum = rollDices();
		if (sum == myPoint) { // thang
			gameStatus = WON;
		}
		else {
			if (7 == sum) { // thua
				gameStatus = LOST;
			}
		}
	}

	if (WON == gameStatus) { // thong bao nguoi choi thang
		puts("YOU WIN");
	}
	else { // thong bao nguoi choi thua
		puts("YOU LOSE");
	}

	return 0;
}

int rollDices() {
	int d1 = 1 + rand() % 6;
	int d2 = 1 + rand() % 6;
	printf("Player rolled: %d + %d = %d\n", d1, d2, d1 + d2);
	return d1 + d2;
}