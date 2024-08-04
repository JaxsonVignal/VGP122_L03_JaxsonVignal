#include <iostream>
using namespace  std;


int main() {
	
	class  cars {
	public:
		int carnum;
		float hours;
		float charge;
	};

	cars car1;
	cars car2;
	cars car3;

	car1.carnum = 1;
	car2.carnum = 2;
	car3.carnum = 3;
	
	cout << "Enter hours for car 1";
	cin >> car1.hours;

	if(car1.hours > 3){
		car1.charge = 20.0f;
		car1.hours = car1.hours - 3;
		car1.charge = car1.charge + car1.hours * 5;
		car1.hours = car1.hours + 3;
	}
	else {
		car1.charge = 20.0f;
	}
	

	if (car1.charge < 20) {
		car1.charge = 20;
	}
	else if (car1.charge > 50) {
		car1.charge = 50;
	}

	cout << "Enter hours for car 2";
	cin >> car2.hours;

	if (car2.hours > 3) {
		car2.charge = 20.0f;
		car2.hours = car2.hours - 3;
		car2.charge = car2.charge + car2.hours * 5;
		car2.hours = car2.hours + 3;
	}
	else {
		car2.charge = 20.0f;
	}


	if (car2.charge < 20) {
		car2.charge = 20;
	}
	else if (car2.charge > 50) {
		car2.charge = 50;
	}

	cout << "Enter hours for car 3";
	cin >> car3.hours;

	if (car3.hours > 3) {
		car3.charge = 20.0f;
		car3.hours = car3.hours - 3;
		car3.charge = car3.charge + car3.hours * 5;
		car3.hours = car3.hours + 3;
	}
	else {
		car3.charge = 20.0f;
	}


	if (car3.charge < 20) {
		car3.charge = 20;
	}
	else if (car3.charge > 50) {
		car3.charge = 50;
	}

	

	float totalCharges = car1.charge + car2.charge + car3.charge;
	float totalHours = car1.hours + car2.hours + car3.hours;
	

	cout << "| Car | Hours | Charge |\n";
	cout << "|  1  |   " << car1.hours << "   | " << car1.charge << "     |\n";
	cout << "|  2  |   " << car2.hours << "   | " << car2.charge << "     |\n";
	cout << "|  3  |   " << car3.hours << "   | " << car3.charge << "     |\n";
	cout << "|Total|   " << totalHours << "   | " << totalCharges << "    |\n";
}

