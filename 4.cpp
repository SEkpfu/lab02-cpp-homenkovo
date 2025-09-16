#include <iostream>

int main() {
	int m, w;
	std::cout << "Введите день месяца и номер дня недели: ";
	std::cin >> m >> w;

	std::cout << "a) ";
	if (m == 13 && (w == 2 || w == 5)) {
		std::cout << "Unlucky day";
	} std::cout << std::endl;

	std::cout << "b) ";
	if (m == 13 && (w == 2 || w == 5) || m == 17 && w == 5) {
		std::cout << "Unlucky day";
	} std::cout << std::endl;

	return 0;
}

