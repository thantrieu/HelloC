#include <iostream>

using namespace std;

int main() {
	long n; // khai báo biến n
	printf("Nhap n > 0: ");
	cin >> n;

	if (n < 0) { // nếu n < 0 thì nhập lại
		cout << "Nhap n > 0!" << endl;
	}
	else { // nếu không thì xét tiếp
		long revert = 0; // số đảo
		long m = n; // lưu giá trị của n sang m
		while (m > 0) { // thực hiện đảo ngược m
			revert = revert * 10 + m % 10;
			m /= 10; // giảm m đi 10 lần để loại bỏ giá trị phần đơn vị
		}

		if (revert == n) { // nếu số đảo trùng với n
			cout << n << " la so thuan nghich.\n" << endl;
		}
		else { // ngược lại
			cout << n << " khong thuan nghich." << endl;
		}
	}

	return 0;
}
