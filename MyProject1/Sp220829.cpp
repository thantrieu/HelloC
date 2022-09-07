#include <iostream>
using namespace std;

int& changeX() {
	int x = 200;
	return x;
}

int main() {
	int x = 0;
	x = changeX();
	cout << x << endl;

	return 0;
}