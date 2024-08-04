#include <iostream>
using namespace  std;


double hyp(double a, double b) {
	double a2 = pow(a,2);
	double b2 = pow(b,2);
	double c2 = a2 + b2;
	double c = sqrt(c2);

	return c;
}

int main() {
	
	double tri1 = hyp(3.0, 4.0);
	double tri2 = hyp(5.0, 12.0);
	double tri3 = hyp(8.0, 15.0);

	cout << "Triangle 1 = " << tri1 <<endl;
	cout << "Triangle 2 = " << tri2 << endl;
	cout << "Triangle 3 = " << tri3 << endl;
}