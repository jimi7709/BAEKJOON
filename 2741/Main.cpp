#include <iostream>


int main(void) {
	int N;
	std::cin >> N;
	if (N <= 100000) {
		for (int i = 1; i <= N; i++) {
			std::cout << i << '\n';
		}
	}

	return 0;
}