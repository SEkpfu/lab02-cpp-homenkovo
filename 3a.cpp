#include <iostream>
#include <cmath>

// -1; 5

int main() {
	double x;
	std::cout << "x = ";
	std::cin >> x;

	double y_a = (x > -2);
	if (x <= 10) {
		y_a *= x * (x + 4) + 5;
	} else {
		y_a *= 1.0 / (x * (x + 4) - 5);
	}

	std::cout << "a) " << y_a << std::endl;

	return 0;
}

