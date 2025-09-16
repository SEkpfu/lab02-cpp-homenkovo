#include <algorithm>
#include <iostream>
#include <cmath>

#define EQ_EPS(a, b) (std::abs((a) - (b)) <= 1e-5)

int main() {
	double tr[3];
	std::cout << "x = ";
	std::cin >> tr[0];
	std::cout << "y = ";
	std::cin >> tr[1];
	std::cout << "z = ";
	std::cin >> tr[2];

	std::sort(tr, tr + sizeof(tr) / sizeof(*tr));

	const bool is_triangle = tr[0] + tr[1] > tr[2];
	std::cout << "a) " << (is_triangle ? "Yes" : "No") << std::endl;
	if (is_triangle) {
		std::cout << "b) ";
		if (EQ_EPS(tr[0], tr[1]) || EQ_EPS(tr[1], tr[2])) {
			std::cout << "isosceles ";
		} if (EQ_EPS(tr[0] * tr[0] + tr[1] * tr[1], tr[2] * tr[2])) {
			std::cout << "right ";
		} if (EQ_EPS(tr[0], tr[1]) && EQ_EPS(tr[1], tr[2])) {
			std::cout << "equilateral ";
		} std::cout << "triangle" << std::endl;
	}

	return 0;
}

