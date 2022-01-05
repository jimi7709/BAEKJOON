#include <iostream>

using namespace std;

int main(void) {

	int N;
	cin >> N;
	if (N >= 1 && N <= 100) {
		for (int i = 1; i <= N; i++) {
			for (int j = N - i; j >= 1; j--) {
				cout << " ";
			}
			for (int k = 1; k <= (2 * i - 1); k++) {
				cout << "*";
			}
			cout << "\n";
		}
	}
	return 0;
}