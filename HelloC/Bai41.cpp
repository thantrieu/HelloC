#include <iostream>
using namespace std;

// khai bao nguyen mau:
int isRevert(int n);
int isDivisibleK(int n, int k);

int main() {
	int i, k;
	cout << "Nhap k khac 0: ";
	cin >> k;
	if (k != 0) {
		int count = 0;
		for (i = 10000000; i <= 99999999; i++) {
			if (isRevert(i) && isDivisibleK(i, k)) {
				cout << i << " ";
				count++;
				if (count % 10 == 0) {
					cout << endl; // in xuong dong
				}
			}
		}
	}
	else {
		cout << "Nhap n != 0" << endl;
	}
}

int isRevert(int n) {
	int m = n;
	int rev = 0;
	while (m > 0)
	{
		rev = rev * 10 + m % 10;
		m /= 10;
	}
	return rev == n;
}

int isDivisibleK(int n, int k) {
	return n % k == 0;
}