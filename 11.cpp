#include <iostream>
#include <cassert>

int main() {
	int birth[3], date[3];
	std::cout << "Birth date: ";
	std::cin >> birth[0] >> birth[1] >> birth[2];
	std::cout << "Date: ";
	std::cin >> date[0] >> date[1] >> date[2];

	const int age = date[2] - birth[2] + (date[1] > birth[1] || (date[1] == birth[1] && date[0] >= birth[0])) - 1;
	assert(age >= 0);

	std::cout << "Вам " << age << ' ' << (age % 10 == 1 && age % 100 != 11 ? "год" : 2 <= age % 10 && age % 10 <= 4 && age % 100 / 10 != 1 ? "года" : "лет") << std::endl;

	return 0;
}

