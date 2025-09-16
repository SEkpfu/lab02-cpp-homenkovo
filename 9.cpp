#include <iostream>

int main() {
	double x, y;
	std::cout << "x = ";
	std::cin >> x;
	std::cout << "y = ";
	std::cin >> y;

	const double sqr_of_distance = x * x + y * y;
	std::cout << "a) " << (-2 <= x && x <= 0 && 0 <= y && y <= 1 ? "Yes" : "No") << std::endl
		  << "b) " << (y >= 0 && sqr_of_distance <= 25 ? "Yes" : "No") << std::endl
		  << "c) " << (x >= 0 && 9 <= sqr_of_distance && sqr_of_distance <= 36 ? "Yes" : "No") << std::endl
		  << "d) " << (x >= 0 && y >= 0 && y <= -2 * x + 2 ? "Yes" : "No") << std::endl;

	return 0;
}

