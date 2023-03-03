#include <iostream>
using namespace std;

int main() {
	int base, power;
	cin >> base >> power;
	int tmp = base;
	if (power == 0) {
		cout << 1;
		return 0;
	}
	for (int i = 1; i < power; i++) {
		base *= tmp;
	}
	cout << base;
}