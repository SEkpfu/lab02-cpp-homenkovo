#include <iostream>

int main() {
	double x, y;
	std::cout << "x = ";
	std::cin >> x;
	std::cout << "y = ";
	std::cin >> y;

	int score = 0;
	const double sqr_of_distance = x * x + y * y;
	if (sqr_of_distance <= 16) {
		score += 5;
		if (sqr_of_distance <= 4) {
			score += 5;
		}
	}

	std::cout << score << std::endl;

	return 0;
}

