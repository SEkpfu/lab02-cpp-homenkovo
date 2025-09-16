#include <algorithm>
#include <iostream>

#define INPUT(VAR) do { \
		   	std::cout << #VAR << " = "; \
			std::cin >> VAR; \
		   } while (false)

int main() {
	double r, z, a, b, c;
	INPUT(r);
	INPUT(z);
	INPUT(a);
	INPUT(b);
	INPUT(c);

	std::cout << "a) " << (2 * r <= std::min(a, b) && z <= c ? "Yes" : "No") << std::endl;

	double brick[3], square[2];
	INPUT(brick[0]);
	INPUT(brick[1]);
	INPUT(brick[2]);
	INPUT(square[0]);
	INPUT(square[1]);

	std::sort(brick, brick + sizeof(brick) / sizeof(*brick));
	std::sort(square, square + sizeof(square) / sizeof(*square));

	std::cout << "b) " << (brick[0] <= square[0] && brick[1] <= square[1] ? "Yes" : "No") << std::endl;

	return 0;
}

