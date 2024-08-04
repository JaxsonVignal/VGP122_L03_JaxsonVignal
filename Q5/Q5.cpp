#include <iostream>
using namespace  std;

int toCel(int f) {
	int c = (f - 32);
	c = c * 5 / 9;
	return c;
}

int toFar(int c) {
	int f = (9 / 5) * c + 32;
	return f;
}

int main() {
	for (int i = 0; i <= 100; i++) {
		int conv = toCel(i);
		cout << i << "f = " << conv << "c\n";
	}

	for (int i = 32; i <= 212; i++) {
		int conv = toFar(i);
		cout << i << "f = " << conv << "c\n";
	}

}