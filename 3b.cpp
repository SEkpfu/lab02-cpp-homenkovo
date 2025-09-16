#include <iostream>
#include <cmath>

// -1; 5

int main() {
	double x;
	std::cout << "x = ";
	std::cin >> x;

	std::cout << "b) ";
	if (x <= 0) {
		std::cout << (x > -2) * (x * (x + 4) + 5) << std::endl;
	} else {
		const double tmp = 1.0 / (x * (x + 4) - 5);
		if (std::isfinite(tmp)) {
			std::cout << tmp << std::endl;
		} else {
			std::cerr << "y is not a regular number" << std::endl;
		}
	}

	return 0;
}

