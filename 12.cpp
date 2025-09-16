#include <iostream>

int main() {
	int a, b, c;
	std::cin >> a >> b >> c;

	std::cout << "a) " << a * (a > 10) + b * (b > 10) + c * (c > 10) << std::endl
		  << "b) " << (a % 2 == 0) + (b % 2 == 0) + (c % 2 == 0) << std::endl
		  << "c) " << a + b + c - std::min(std::min(a, b), c) - std::max(std::max(a, b), c) << std::endl
		  << "d) " << (a <= b && a <= c) + 2 * (a > b && b <= c) + 3 * (a > b && b > c) << std::endl;

	return 0;
}

