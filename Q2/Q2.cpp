#include <iostream>
using namespace  std;


float roundToInt(float x) {
	float y = floor(x * 1 + 0.5) / 1;
	return y;
}

float roundToTenths(float x) {
	float y = floor(x * 10 + 0.5) / 10;
	return y;
}

float roundToHundridths(float x) {
	float y = floor(x * 100 + 0.5) / 100;
	return y;
}

float roundToThousanth(float x) {
	float y = floor(x * 1000 + 0.5) / 1000;
	return y;
}
int main() {

	float x;
	cout << "Enter  a number";
	cin >> x;

	float y = roundToInt(x);
	float z = roundToTenths(x);
	float g = roundToHundridths(x);
	float j = roundToThousanth(x);

	cout << "The number you entered is "<<x<<endl;
	cout << "The number rounded to the tenth is " << z << endl;
	cout << "The number rounded to  the hundridth is " << g << endl;
	cout << "The number rounded to  the thousanth is " << j << endl;
}



