#include <iostream>
using namespace  std;


bool isEven(int a) {
	if (a % 2 == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

int main() {
	int store;
	int count;
	cout << "How many numbers are you inputing?";
	cin >> count;

	int* numbers = new int[count];

	for (int i = 0; i < count; i++) {
		cout << "Enter a number";
		cin >> store;
		numbers[i] = store;
	}

	for (int i = 0; i < count; i++) {
		if (isEven(numbers[i]) == 1) {
			cout << "Number " << i + 1 << " = " << "true\n";
		}
		else {
			cout << "Number " << i +  1 << " = " << "false\n";
		}
	}

}
