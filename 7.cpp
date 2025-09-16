#include <iostream>

int main() {
	double a, b;
	char op;
	std::cin >> a >> op >> b;

	switch (op) {
		case '+':
			a += b;
			break;
		case '-':
			a -= b;
			break;
		case '*':
			a *= b;
			break;
	}

	std::cout << a << std::endl;

	return 0;
}

