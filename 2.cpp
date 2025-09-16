#include <iostream>

int main() {
	int n;
	std::cout << "Number: ";
	std::cin >> n;

	std::cout << "a) " << (n > 0 ? "Positive" : n < 0 ? "Negative" : "Zero") << std::endl
		  << "b) " << (n % 2 ? "Odd" : "Even") << std::endl;

	return 0;
}

